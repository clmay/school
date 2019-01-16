import java.util.Scanner;

class InputError {
   public static void main(String[] args){
      Scanner reader = new Scanner(System.in);
      int num = reader.nextInt();
      String sentence = reader.nextLine();
      System.out.println(sentence + " " + num);
   }
}
