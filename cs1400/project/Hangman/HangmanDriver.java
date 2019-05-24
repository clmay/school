import java.util.Random;
import java.util.Scanner;

public class HangmanDriver {
    private static Scanner read = new Scanner(System.in); // reads input from stdin
    private static int maxGuesses = 7; // the number of guesses the user is allowed

    public static void main(String[] args) {
        int choice = 0;
        header();                   // print the header ASCII art
        while (true) {              // start an infinite loop
            menu();                 // print the menu
            choice = selection();   // get the user's choice
            switch (choice) {
                case 1:             // if user chooses "New game"
                    Random gen = new Random();
                    RandomWord rw = new RandomWord("wordlist.txt"); // instantiate a RandomWord object
                    int index = gen.nextInt(rw.size()) + 1;
                    String word = rw.getWord(index);
                    String definition = rw.getDefinition(index);
                    String example = rw.getExample(index);
                    Hangman h = new Hangman(word);  // and a Hangman game
                    while (h.isSolved() == false && h.getNumMisses() < maxGuesses) {
                    // while the challenge word is unsolved and the user still has attempts remaining
                        update(h); // run the game loop
                    }
                    if (h.isSolved() == true) {             // if the game is solved,
                        System.out.println("Congratulations, you win!\n"); // the user won
                        System.out.println("   Your word: \"" + word + "\"\n");
                        System.out.println("   Definition: " + definition + ".\n");
                        System.out.println("   Example: " + example);
                    } else if (h.getNumMisses() == maxGuesses) { // otherwise, if they've run out of guesses,
                        Gallows.print(h.getNumMisses());    // print the final gallows
                        System.out.println("\nOh no! You have been hanged! Please try again.\n"); // and disappoint the user :(
                        System.out.println("   The word was \"" + word + "\".\n");
                        System.out.println("   Definition: " + definition + ".\n");
                        System.out.println("   Example: \n\n   " + example);
                        System.out.println();
                    }
                    break;
                case 2:             // if user chooses "Quit"
                    exit();         // run the exit statements
                    break;
                default:
                    break;
            }
        }
    }

    public static void update(Hangman h) {
        Gallows.print(h.getNumMisses());        // print the current gallows
        h.printProgress();                      // and the current progress
        h.printMisses();                        // print the user's misses
        System.out.println("Guesses remaining: " + (maxGuesses - h.getNumMisses()));
        char c = Character.toLowerCase(guess());                       // get a new guess
        if (h.isMiss(c) == true) {                      // and if it's a miss,
            h.addMiss(c);                       // add it to the misses!
        } else {                                // otherwise,
            h.updateProgress(c);                // update the progress
        }
    }
    
    public static void exit() {
        // so long, and thanks for all the char(s)!
        System.out.println("Thanks for playing HANGMAN! Play again soon.\n");
        System.exit(0);
    }

    public static void menu() {
        System.out.println("\n============================[   MENU   ]============================\n");
        System.out.println("   1. New game");
        System.out.println("   2. Quit");
    }

    public static int selection() {
        int choice = 0;
        while (choice != 1 && choice != 2) { // while the user's selection is not a valid option,
            System.out.print("\nEnter your choice: "); // prompt for their selection
            try {
                choice = Integer.parseInt(read.next());
                if (choice != 1 && choice != 2) {   // if the user did not choose a valid option,
                    System.out.println("Please enter a valid option."); // indicate that selection was invalid,
                    menu();                         // and repeat the menu
                }
            } catch (Exception e) { // if the user entered anything other than a number,
                System.out.println("You must enter a number."); // let them know it must be numeric,
                menu();             // and repeat the menu
            }
        }
        System.out.println();   // this empty line makes the terminal output more readable
        return choice;
    }

    public static char guess() {
        char c = ' ';
        while (!Character.isLetter(c)) {    // while the user enters anything other than a letters,
            System.out.print("\nGuess a letter: "); // prompt for a letter
            try {
                c = read.next().charAt(0);
                if (!Character.isLetter(c)) {   // if they still enter non-alphabetic inputs,
                    System.out.println("Please enter letters only."); // let them know the requirement
                }
            } catch (Exception e) { // if they somehow generate an exception
                System.out.println("Invalid input.");   // it's handled
            }
        }
        System.out.println();   // this empty line makes the terminal output more readable
        return c;
    }

    public static void header() {
        System.out.println("\nWelcome to\n");
        System.out.println("    db   db  .d8b.  d8b   db  d888b  .88b  d88.  .d8b.  d8b   db  ##");
        System.out.println("    88   88 d8' `8b 888o  88 88' Y8b 88'YbdP`88 d8' `8b 888o  88  ##");
        System.out.println("    88   88 88   88 88V8o 88 88      88  88  88 88   88 88V8o 88  ##");
        System.out.println("    88ooo88 88ooo88 88 V8o88 88  ooo 88  88  88 88ooo88 88 V8o88  ##");
        System.out.println("    88   88 88   88 88  V888 88.  88 88  88  88 88   88 88  V888  \"\""); // this line looks funny because the quotes must be escaped
        System.out.println("    YP   YP YP   YP VP   V8P  Y888P  YP  YP  YP YP   YP VP   V8P  ##");
    }
}