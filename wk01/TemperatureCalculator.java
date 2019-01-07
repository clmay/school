// Write a program that allows the user to enter in the temperature in Fahrenheit
// and converts it to Celsius.The equation to convert is the following:
//
// > C = (F-32) * 5 / 9
//
// Example:
//
// `Enter the temperature in Fahrenheit: 32`
// `That is 0 degrees Celsius.`
//
// Hint: Watch out for int division
//
// Submit the .java file and a screen shot of the completed program.

import java.util.Scanner;

public class TemperatureCalculator {
  public static void main(String args[]) {
    // create handle to stdin
    Scanner keys = new Scanner(System.in);

    // declare variables
    double fahrenheit;
    double celsius;

    // get input from the user
    System.out.println("Enter the temperature in Fahrenheit: ");
    fahrenheit = keys.nextDouble();
    celsius = 5.0 * (fahrenheit - 32) / 9.0;

    // display the result
    System.out.println(fahrenheit + " degrees Fahrenheit is " + celsius + " degrees Celsius.");
  }
}
