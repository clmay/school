import java.util.Scanner;
/**********************
Luggage Check: Determines if you can carry an item on an airplane:
Restrictions include:
2000 cubic inches max volumn
40 lbs max weight
The maximum dimensions for a carry-on bag are 9 inches x 14 inches x 22 inches (22 cm x 35 cm x 56 cm), including handles and wheels.
**********************/
public class LuggageCheck{
   public static void main(String []args){
       Scanner scan = new Scanner(System.in);
       final int MAX_WEIGHT = 40;
       final int MAX_WIDTH = 14;
       final int MAX_HEIGHT = 22;
       final int MAX_DEPTH = 9;
       int width, height, depth, weight, volumn;

       //Get the inputs
       System.out.println("Enter the Width of the luggage");
       width = scan.nextInt();
       System.out.println("Enter the Height of the luggage");
       height = scan.nextInt();
       System.out.println("Enter the Depth of the luggage");
       depth = scan.nextInt();
       System.out.println("Enter the Weight of the luggage");
       weight = scan.nextInt();

       //Calculate total size
       volumn = width * height * depth;

       //Check package requirements
       if(weight > MAX_WEIGHT && volumn > MAX_WIDTH * MAX_HEIGHT * MAX_DEPTH){
         System.out.println("Fail: Item is too heavy and too large");
       }
       else if(weight > MAX_WEIGHT){
         System.out.println("Fail: Item is too heavy");
       }
       else if(width > MAX_WIDTH || height > MAX_HEIGHT || depth > MAX_DEPTH){
         System.out.println("Fail: Item is too large");
       }
       else {
         System.out.println("Success: Item can be carried on the airplane.");
       }
   }
}
