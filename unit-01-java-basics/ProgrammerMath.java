/***********************************************
* ProgrammerMath.java
* Kim Murphy

Look at the statements below.  For each of the statements, do the following:

- Discuss what you think the output will be
- Key in and compile the statement, comment out the previous output statements.
- Observe the output
- Discuss what patterns or rules you found with the results.
***********************************************/

public class ProgrammerMath {
  public static void main(String args[]) {

    // Prediction: will compute the value of `4 + 2`, concatenate the strings, and print to stdout
    System.out.println("The Number: " + 4 + 2  +" is the answer ");
    // Actual: concatenates the strings and numbers and prints with "42" instead of `4 + 2`

    // Prediction: will compute the value as predicted above
    System.out.println("The Answer " + (40 + 2) );
    // Actual: as predicted

    System.out.println(4 + 2 + " is the answer to life" + "The universe and everything" );

    System.out.println("PI " + (double)2.14159 );

    System.out.println("PI? " + (int)2.14159 );

    System.out.println("Int Division " + 10 / 4 );

    System.out.println("Floating Point Division " + 10.0 / 4 );

    System.out.println("Type Casting as double " + (double)10 / 4 );

    System.out.println("Type Casting as int" + (int)10.5 / 4 );

    System.out.println("Mod: " + 17 % 3 );

    System.out.println("Order of Operations " + 2 + 5 / 3 );

    System.out.println("Cast Operations" + (double)( 2 + 5 ) / 3 );

    System.out.println("Order Matters" + (int)( 1.9 + 1.9 ) );
  }
}
