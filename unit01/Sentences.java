import java.util.Scanner;

public class Sentences {
  public static void main(String[] args) {
    String sentence, repeat;
    int limit = 0;

    Scanner scan = new Scanner(System.in);

    while (true) {
      System.out.println("Enter sentence: ");
      sentence = scan.nextLine();
      System.out.println("Number of times: ");
      limit = Integer.parseInt(scan.nextLine());

      for (int i = 0; i < limit; i++) {
        System.out.println(sentence);
      }

      System.out.println("Would you like to enter another sentence? (y/n)");
      repeat = scan.nextLine();

      if (repeat.charAt(0) == 'n') {
        break;
      }
    }

  }
}
