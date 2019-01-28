import java.util.Scanner;
import java.util.Random;

class MethodsTesting {
	public static void main(String[] args) {
    double radius = 3.0;
    double perimeter;
		double diameter = 2 * radius;
    perimeter = Math.PI * diameter;
    System.out.println("Perimeter: " + perimeter);

    int num = -30;
    if (num < 0) { num = -num; }
    System.out.println("Positive: " + num);

    String strPi = "3.1415";
    double pi = Double.parseDouble(strPi);
    System.out.println("PI: " + pi);

    Random gen1 = new Random();
    int rnum = gen1.nextInt(10) + 10;
    System.out.println("Random: " + rnum);

    Random gen2 = new Random();
    int rnum2 = gen2.nextInt(11) + 2;
    System.out.println("Random: " + rnum2);

    Random gen3 = new Random();
    int die1 = gen3.nextInt(5) + 1;
    int die2 = gen3.nextInt(5) + 1;
    if (die1 == 1 && die2 == 1) {
      System.out.println("Snake eyes");
    } else {
      System.out.println(die1 + " " + die2);
    }
	}
}
