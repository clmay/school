package MinMax;

import java.util.Scanner;

public class MinMaxCLI {
    private static Scanner scan = new Scanner(System.in);

    public MinMaxCLI() {
        char choice = ' ';
        while (choice != 'Q' && choice != 'q') {
            MyArray arr = new MyArray();
            System.out.println("Values: " + arr.toString());
            System.out.println("Min: " + arr.getMin());
            System.out.println("Max: " + arr.getMax());
            String dupes = String.valueOf(arr.hasDuplicates()).substring(0, 1).toUpperCase() + String.valueOf(arr.hasDuplicates()).substring(1);
            System.out.println("Has duplicates? " + dupes);
            System.out.println("Press Enter to view a new list, or Q to quit.");
            choice = scan.nextLine().charAt(0);
        }
    }

    public static void main(String[] args) {
        new MinMaxCLI();
    }

}