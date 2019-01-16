import java.util.Scanner;

public class MyLuggageCheck {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

    // Maximum dimensions, in inches
    final double MAX_LENGTH = 22;
    final double MAX_WIDTH = 14;
    final double MAX_HEIGHT = 9;
    // Maximum weight, in pounds
    final double MAX_WEIGHT = 40;

    double length, width, height, weight;
    boolean tooLarge = false;
    boolean tooHeavy = false;

    System.out.println("Enter the length, width, and height: ");
    length = scan.nextDouble();
    width = scan.nextDouble();
    height = scan.nextDouble();

    System.out.println("Enter the weight: ");
    weight = scan.nextDouble();

    if (length > MAX_LENGTH || width > MAX_WIDTH || height > MAX_HEIGHT) {
      tooLarge = true;
    }

    if (weight > MAX_WEIGHT) {
      tooHeavy = true;
    }

    if (tooLarge && tooHeavy == true) {
      System.out.println("Your luggage is both too large and too heavy.");
    } else if (tooLarge == true) {
      System.out.println("Your luggage is too large.");
    } else if (tooHeavy == true) {
      System.out.println("Your luggage is too heavy.");
    } else {
      System.out.println("Success! Your luggage meets our requirements. You may now board!");
    }
  }
}
