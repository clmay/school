import java.util.Scanner;

public class BingoGame {
    public static void main(String[] args) {
        // Keyboard Scanner
        Scanner keyboard = new Scanner(System.in);
        // Instance of Bingo Card
        BingoCard card = new BingoCard();
        // For Input
        int num;
        do {
            System.out.println(card);
            System.out.println("Enter the Bingo Number: (-1 to quit)");
            try {
                num = Integer.parseInt(keyboard.nextLine());
                card.move(num);
            } catch (Exception e) {
                System.out.println("Error: " + e);
                num = 99;
            }
            if (card.isWin()) {
                System.out.println("Bingo");
                break;
            }
        } while (num > -1);
    }
}