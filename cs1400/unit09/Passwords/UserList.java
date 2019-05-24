import java.io.File;
import java.util.ArrayList;
import java.util.Scanner;

public class UserList implements ParseUsers {
    private ArrayList<String> lines;
    private ArrayList<User> users;

    public UserList(String filePath) {
        this.lines = parseFile("users.txt");
        this.users = parseUsers(lines);
    }

    public ArrayList<String> getLines() {
        return this.lines;
    }

    public ArrayList<User> getUsers() {
        return this.users;
    }

    public ArrayList<String> parseFile(String filePath) {
        ArrayList<String> lines = new ArrayList<>();
        try {
            File file = new File(filePath);
            Scanner read = new Scanner(file);
            while (read.hasNext()) {
                lines.add(read.nextLine().trim());
            }
            read.close();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
        return lines;
    }

    public ArrayList<User> parseUsers(ArrayList<String> lines) {
        ArrayList<User> users = new ArrayList<>();
        int pos;
        for (String l : lines) {
            if (l.indexOf(' ') != l.lastIndexOf(' ')) {
                System.out.println("Invalid input!");
                System.exit(1);
            } else {
                pos = l.indexOf(' ');
                users.add(new User(l.substring(0, pos), l.substring(pos + 1)));
            }
        }
        return users;
    }
}