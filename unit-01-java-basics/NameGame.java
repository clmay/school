//*******************************************************************
//	File:  NameGame.java
//	Allows the user to enter their name and creates a song
//*******************************************************************

import java.util.Scanner;

public class NameGame{

  public static void main(String []args){
    Scanner scan = new Scanner(System.in);
    String name, subname;

    System.out.println("Enter in your Name: ");
    name = scan.nextLine();
    subname = name.substring(1);

    System.out.println(name + ", " + name + " bo b" + subname);
    System.out.println("Banana Fana Fo f" + subname);
    System.out.println("Fe Fi Fo f" + subname);
    System.out.println(name);


  }
}
