package MinMax;

import java.util.Scanner;

public class MinMaxCLI {
    private static Scanner scan = new Scanner(System.in);

    public MinMaxCLI() {
        String choice = "";
        while (choice != "Q") {
            MyArray list = new MyArray();
            System.out.println("Values: " + list.toString());
            System.out.println("Min: " + list.getMin());
            System.out.println("Max: " + list.getMax());
            System.out.println("Press Enter to view a new list, or Q to Quit.");
            choice = scan.nextLine();
        }
    }

    public static void main(String[] args) {
        new MinMaxCLI();
    }

}