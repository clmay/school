import java.util.Scanner;

class FractionReducer{
   public static void main(String args[]){
      Scanner keyboard = new Scanner(System.in);
      
      //Declare the variables
      int numerator, denominator;
      do{
         System.out.println("Enter the numberator: (-1 to exit)");  
         numerator = keyboard.nextInt();
         if(numerator == -1) break;
         System.out.println("Enter the numberator: ");
         denominator = keyboard.nextInt();
          int lcd = numerator;
         
         while(numerator % lcd != 0 || denominator % lcd != 0){
            lcd --;
         } 
        System.out.println("Reduced: " + numerator / lcd + "/" + denominator / lcd);
     }while (numerator != -1);
   }
   
}