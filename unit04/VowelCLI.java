import java.util.Scanner;

public class VowelCLI {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

    System.out.println("Enter a phrase:");
    String input = scan.nextLine();

    System.out.println("Count: " + getVowelCount(input));
  }

  private static boolean isVowel(char letter) {
    boolean result;
    switch (letter) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'Y':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'y':
        result = true;
        break;
      default:
        result = false;
        break;
    }
    return result;
  }

  private static int getVowelCount(String phrase) {
    int count = 0;
    for (int i = 0; i < phrase.length(); i++) {
      if (isVowel(phrase.charAt(i)) == true) {
        count++;
      }
    }
    return count;
  }
}
