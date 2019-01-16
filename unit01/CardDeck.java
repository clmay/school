import java.util.Scanner;
import java.util.Random;
/**********************
Card Deck will create a random number of a card, then display the value of that card.
This program demonstrates the use of a Switch statment as well as Random numbers.
**********************/
public class CardDeck{
   //Random number generator
   public static Random generator = new Random();
   
   public static void main(String []args){
      int card = generator.nextInt(14) + 1;
      int suitNum = generator.nextInt(4);
      String rank, suit;
      
      //Switch statement to determine rank
      switch(card)
      {
         case 1:
            rank = "Ace";
            break;
         case 11:
            rank = "Jack";
            break;
         case 12:
            rank = "Queen";
            break;
         case 13:
            rank = "King";
            break;
         default:
            rank = card + "";
            break;
        
      } 
      //Determines suit
      switch (suitNum)
      {
         case 0:
            suit = "Hearts";
            break;
         case 1:
            suit = "Clover";
            break;
         case 2: 
            suit = "Spades";
            break;
         default:
            suit = "Diamonds";
            break;
      }
      //Output to the user
      System.out.println("You have drawn " + rank + " of " + suit);
   }
}

