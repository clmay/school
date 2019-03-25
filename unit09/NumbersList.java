import java.util.*;
import java.io.*;

class NumberList {
    public static void main(String [] args) {
       try{
          int sum = 0;
          // 1. Declare a file to open the numbers.txt file
          Files numberFile = new File("numbers.txt");
          
          // 2. Create an instance of the scanner to scan the file you just created
          Scanner read = new Scanner(numberFile);
          
          // 3. Complete the while loop to continue reading so long as the file has more values
          while (numberFile.hasNext()) {
             // 4. Complete the sum statement below to store the next int in the file into num.
             int num = read.nextLine();
             // This command prints out the number to make sure it is working. 
             System.out.println ("num: " + num);
             // This line of code sums up all the numbers.  
             sum += num;
          } 
          // This displays the sum        
          System.out.println("The Sum is: " + sum);
        
          // 5. Close the Scanner object
          numberFile.close();
      }
      // If any other error occurred, display the message
       catch(Exception e) {
          System.out.println("Error: " + e.getMessage());
       }
    }
 } 