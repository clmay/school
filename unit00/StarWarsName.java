// Write a program to tell the user their Star Wars Name.
//
// First name:
//
// First 3 letters of your last name  + First 2 letters of your first name
//
// Last name:
//
// First 2 letters of mother's maiden name  + First 3 letters of birth town
//
// Sample Run
//
// Enter your first and last name: Kim Murphy
// Enter Mother’s maiden name: Jeppson
// Enter your birth city: Hollywood
//
// Your Star Wars Name is: Murki Jehol

import java.util.Scanner;

public class StarWarsName {

  public static void main(String []args){

    // Create a handle to stdin
    Scanner scan = new Scanner(System.in);

    // Declare variables
    String name, maidenName, hometown;
    String[] splitted = new String[0]; // An array of strings to store the first and last name together

    // Get input
    while (splitted.length != 2) {
      System.out.println("Enter your first and last name: ");
      name = scan.nextLine().toLowerCase();
      splitted = name.split("\\s");
    }

    System.out.println("Enter your mother's maiden name: ");
    maidenName = scan.nextLine().toLowerCase();

    System.out.println("Enter your birth city: ");
    hometown = scan.nextLine().toLowerCase();

    // Compute the Star Wars character name
    name = splitted[1].substring(0, 1).toUpperCase()
         + splitted[1].substring(1, 3)
         + splitted[0].substring(0, 2)
         + " "
         + maidenName.substring(0, 1).toUpperCase()
         + maidenName.substring(1, 2)
         + hometown.substring(0, 3);

    // Output the result
    System.out.println("Your Star Wars name is: " + name);

  } // end `main()`
} // end `StarWarsName`
