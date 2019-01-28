import java.util.Scanner;

public class DogYears {
  public static void main(String args[]) {

    // Create a handle to stdin
    Scanner scan = new Scanner(System.in);

    // Declare variables
    int humanYears; // Age in human years
    int dogYears;

    // Get the input from user
    System.out.println("Enter the age of your dog in human years: ");
    humanYears = scan.nextInt();

    // Calculate age in dog years
    dogYears = humanYears * 7;

    // Display the result
    System.out.println("Your dog is " + dogYears + " in dog years.");

  } // end `main()`
} // end `DogYears`
