import java.util.Random;
import java.util.Scanner;

public class GuessingGame {

  public static void main(String[] args) {

    Random rnd = new Random();
    Scanner scan = new Scanner(System.in);

    int secret = rnd.nextInt(101) + 1;
    int attempts = 0;

    System.out.println("Guess a number!");

    while (true) {
      int guess = scan.nextInt();

      if (guess > secret) {
        System.out.println("Guess a lower number.");
        attempts++;
      } else if (guess < secret) {
        System.out.println("Guess a higher number.");
        attempts++;
      } else {
        System.out.println("Correct! It only took you " + attempts + " guesses!");
        break;
      }

    }

  }

}
