import java.util.Scanner;

public class PushUps {
  public static void main(String[] args) {

    // Create handle to stdin
    Scanner scan = new Scanner(System.in);

    // Declare variables
    int score, touchdowns, total;

    // Get input for the final game score
    System.out.println("Enter Weber's final score: ");
    score = scan.nextInt();
    touchdowns = score / 7;

    // Waldo Wildcat does seven pushups per touchdown every time a touchdown is made
    for (int i = 1; i < touchdowns + 1; i++) {
      total += 7 * i;
    }

    // Output the result
    System.out.println("Waldo did " + total + " pushups during that game.");

  } // end `main()`
} // end `PushUps`
