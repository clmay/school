import java.util.ArrayList;
import java.util.Scanner;

public class StudentGrades {
    public static void printMenu() {
        System.out.println("1. Add student");
        System.out.println("2. View stats");
        System.out.println("3. View all");
        System.out.println("4. Quit");
    }

    public static void main(String[] args) {
        int choice = 0;
        ArrayList<Grade> grades = new ArrayList<>();
        Scanner scan = new Scanner(System.in);

        while (choice != 4) {
            printMenu();
            choice = scan.nextInt();
            System.out.println("You chose: " + choice);
        }
    }
}