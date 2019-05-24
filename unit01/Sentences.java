import java.util.Scanner;

public class Sentences {
    public static void main(String[] args) {

        // Create handle to stdin
        Scanner scan = new Scanner(System.in);

        // Declare variables
        String sentence, repeat;
        int limit = 0;

        // Get inputs
        while (true) {
            System.out.println("Enter sentence: ");
            sentence = scan.nextLine();
            System.out.println("Number of times: ");
            limit = Integer.parseInt(scan.nextLine());

            // Print the sentence multiple times, up to the user-defined limit
            for (int i = 0; i < limit; i++) {
                System.out.println(sentence);
            } // end `for`

            // Ask if the user would like to continue
            System.out.println("Would you like to enter another sentence? (y/n)");
            repeat = scan.nextLine();

            // If the user types a string starting with 'n', exit the program
            if (repeat.charAt(0) == 'n') {
                break;
            }

        } // end `while`

        scan.close();

    } // end `main()`
} // end `Sentences`
