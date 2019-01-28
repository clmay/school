import java.util.Scanner;
import java.util.Random;

class SlotMachine {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    Random generator = new Random();

    int tokens = 100;
    String input;

    do {
      System.out.println("Press Enter to pull (q to quit)");
      input = scan.nextLine();
      int slot1, slot2, slot3;

      slot1 = generator.nextInt(9)+1;
      slot2 = generator.nextInt(9)+1;
      slot3 = generator.nextInt(9)+1;

      System.out.println (slot1 + " " + slot2 + " " + slot3);

      if (slot1 == slot2 && slot2 == slot3) {
        tokens += 5;
      } else if (slot1 == slot2 || slot2 == slot3 || slot3 == slot1) {
        tokens += 1;
      } else {
        tokens -= 1;
      }
      System.out.println ("Tokens: " + tokens);

      } while (tokens > 0 && input.length() == 0);
  }
}
