import java.util.Scanner;

public class PasswordCLI {

    public static void main(String[] args) {
        String filePath = "users.txt";
        UserList users = new UserList(filePath);
        Scanner read = new Scanner(System.in);
        User user = new User();
        
        while (user.isAuth(users) == false) {
            System.out.println("Username?");
            username = read.nextLine();
            System.out.println("Password?");
            password = read.nextLine();
            
        }

        for (int i = 0; i < users.getLines().size(); i++) {
            System.out.println("Username: " + users.getUsernames().get(i));
            System.out.println("Password: " + users.getPasswords().get(i));
            System.out.println();
        }

        read.close();
    }
}