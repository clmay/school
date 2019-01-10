import java.util.Scanner;

public class DogYears {
  public static void main(String args[]) {
    Scanner keys = new Scanner(System.in);

    // Declare variables
    int humanYears;
    int dogYears;

    // Get the input from user
    System.out.println("Enter the age of your dog in human years: ");
    humanYears = keys.nextInt();

    // Calculate the age
    dogYears = humanYears * 7;

    // Display the result
    System.out.println("Your dog is " + dogYears + " in dog years.");

  } // end main()
} // end DogYears
