import java.util.Scanner;

public class PushUps {
  public static void main(String[] args) {
    int score, touchdowns, total;
    score = touchdowns = total = 0;

    Scanner scan = new Scanner(System.in);

    System.out.println("Enter Weber's final score: ");
    score = scan.nextInt();
    touchdowns = score / 7;

    for (int i = 1; i < touchdowns + 1; i++) {
      total += 7 * i;
    }

    System.out.println("Waldo did " + total + " pushups during that game.");
  }
}
