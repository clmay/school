import java.util.Scanner;

public class Sentences {
  public static void main(String[] args) {
    String sentence = "";
    int limit = 0;

    Scanner in = new Scanner(System.in);

    System.out.println("Enter sentence: ");
    sentence = in.nextLine();

    System.out.println("Number of times: ");
    limit = in.nextInt();

    for (int i = 0; i < limit; i++) {
      System.out.println(sentence);
    }

  }
}
