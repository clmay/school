import java.util.Random;
import java.util.Scanner;

public class MySlotMachine {

  public static void main(String[] args) {

    Random generator = new Random();
    Scanner scan = new Scanner(System.in);

    int tokens = 100;
    String input;

    do {
      System.out.println("Press Enter to continue, or 'q' to quit.");
      input = scan.nextLine();

      int slot1 = generator.nextInt(10) + 1;
      int slot2 = generator.nextInt(10) + 1;
      int slot3 = generator.nextInt(10) + 1;

      if (slot1 == slot2 && slot2 == slot3) {
        tokens += 20;
      } else if (slot1 == slot2 || slot1 == slot3 || slot2 == slot3) {
        tokens += 2;
      } else {
        tokens--;
      }

      System.out.println("You pulled: " + slot1 + " " + slot2 + " " + slot3);
      System.out.println("Tokens remaining: " + tokens + "\n");

    } while (tokens > 0 && input.length() == 0);

  }

}
