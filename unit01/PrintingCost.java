import java.util.Scanner;

public class PrintingCost {
  public static void main(String[] args) {
    int qty, price;
    double total = 0.00;
    qty = price = 0;

    Scanner scan = new Scanner(System.in);

    System.out.println("How many copies?");
    qty = scan.nextInt();

    if (qty < 100) {
      price = 30;
    } else if (qty < 500) {
      price = 28;
    } else if (qty < 1000) {
      price = 27;
    } else {
      price = 25;
    }

    total = (qty * price) / 100.0;
    System.out.println("Total cost: " + total);
  }
}
