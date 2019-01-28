import java.util.Scanner;

public class LuggageCheck {
  public static void main(String[] args) {
     // Create a handle to stdin
    Scanner scan = new Scanner(System.in);

    // Maximum dimensions, in inches
    final double MAX_LENGTH = 22;
    final double MAX_WIDTH = 14;
    final double MAX_HEIGHT = 9;

    // Maximum weight, in pounds
    final double MAX_WEIGHT = 40;

    // Declare variables
    double length, width, height, weight;
    boolean tooLarge = false;
    boolean tooHeavy = false;

    // Get input from user
    System.out.println("Enter the length, width, and height: ");
    length = scan.nextDouble();
    width = scan.nextDouble();
    height = scan.nextDouble();

    System.out.println("Enter the weight: ");
    weight = scan.nextDouble();

    // Decide whether the luggage is too large in any dimension
    if (length > MAX_LENGTH || width > MAX_WIDTH || height > MAX_HEIGHT) {
      tooLarge = true;
    }

    // Decide whether the luggage is too heavy
    if (weight > MAX_WEIGHT) {
      tooHeavy = true;
    }

    // Produce the output
    if (tooLarge && tooHeavy == true) {
      System.out.println("Your luggage is both too large and too heavy.");
    } else if (tooLarge == true) {
      System.out.println("Your luggage is too large.");
    } else if (tooHeavy == true) {
      System.out.println("Your luggage is too heavy.");
    } else {
      System.out.println("Success! Your luggage meets our requirements. You may now board!");
    }

  } // end `main()`
} // end `LuggageCheck`
