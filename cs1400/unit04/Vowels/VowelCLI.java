import java.util.Scanner;

public class VowelCLI {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

    System.out.println("Enter a phrase:");
    String input = scan.nextLine();

    System.out.println("Count 'Y' as a vowel? (Y/N)");
    String decision = scan.nextLine();

    boolean countYs = false;
    if (decision.equalsIgnoreCase("Y")) {
      countYs = true;
    }

    int count = getVowelCount(input);
    if (countYs) {
      count += getYCount(input);;
    }

    System.out.println("Count: " + count);
  }

  private static boolean isVowel(char letter) {
    boolean result;
    switch (letter) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        result = true;
        break;
      default:
        result = false;
        break;
    }
    return result;
  }

  private static boolean isY(char letter) {
    boolean result;
    switch (letter) {
      case 'Y':
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

  private static int getYCount(String phrase) {
    int count = 0;
    for (int i = 0; i < phrase.length(); i++) {
      if (isY(phrase.charAt(i)) == true) {
        count++;
      }
    }
    return count;
  }
}
