import java.util.Scanner;

public class PrintingCost {
    public static void main(String[] args) {

        // Create handle to stdin
        Scanner scan = new Scanner(System.in);

        // Declare & initialize variables
        int qty, price;
        double total;

        // Get input from user
        System.out.println("How many copies?");
        qty = scan.nextInt();

        // The price is determined by the number of copies
        if (qty < 100) {
            price = 30;
        } else if (qty < 500) {
            price = 28;
        } else if (qty < 1000) {
            price = 27;
        } else {
            price = 25;
        }

        // Output the result
        total = (qty * price) / 100.0;
        System.out.println("Total cost: " + total);

        scan.close();

    } // end `main()`
} // end `PrintingCost`
