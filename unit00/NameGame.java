//*******************************************************************
//	File:  NameGame.java
//	Allows the user to enter their name and creates a song
//*******************************************************************

import java.util.Scanner;

public class NameGame{

  public static void main(String []args){

    // Create a handle to stdin
    Scanner scan = new Scanner(System.in);

    // Declare variables
    String name, subname;

    // Take input
    System.out.println("Enter your name: ");
    name = scan.nextLine(); // reads the name into variable `name`
    subname = name.substring(1); // assigns the name without the first letter to `substring`

    // Output part of a common children's song
    System.out.println(name + ", " + name + " bo b" + subname);
    System.out.println("Banana Fana Fo f" + subname);
    System.out.println("Fe Fi Fo f" + subname);
    System.out.println(name);


  } // end `main()`
} // end `NameGame`
