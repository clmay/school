import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JLabel;

class MagicSquare {

    /*
     * 1. Modify the declaration below so it creates a 2d array with the following
     * values: If you did this correctly, you should see your values in the window.
     *   8 11 14  1
     *  13  2  7 12
     *   3 16  9  6
     *  10  5  4 15
     */

    private int mSquare[4][4] = { { 8, 11, 14,  1}
                                , {13,  2,  7, 12}
                                , { 3, 16,  9,  6}
                                , {10,  5,  4, 15}
                                };

    /*
     * 2. Using the array you just wrote, discuss with your neighbor what would be
     * the value of the following positions: Then go to the main() method at the
     * bottom and remove the comment for #2. Run the program and look in the console
     * output to check your answer. a. mSquare[1][2] b. mSquare[3][1] c.
     * mSquare[1][4]
     */



    /*
     * 3. Examine the following rowSum() method. Discuss with your neighbor the
     * following: a. What positions of the 2d array are getting added together? b.
     * What do you think will be the final value of sum? c. Remove the comment for
     * question 3 and run the program to check your answer
     */

    public int rowSum() {
        int rowSum = 0;
        for (int c = 0; c < mSquare[0].length; c++) {
            rowSum += mSquare[0][c];
        }
        return rowSum;
    }

    /*
     * 4. Fix the following method below so it returns the sum of all the numbers in
     * column 0. Remove the comment below for #4 to test the problem. If you get the
     * same answer as #3, then it is correct.
     */

    public int colSum() {
        return 0;
    }

    /*
     * 5. Examine the following code. Discuss with your neighbor the following: a.
     * What is the starting value of currRow? b. Is the outer loop iterating rows or
     * columns? c. Is the inner loop iterating rows or columns? d. What is the value
     * of currRow after the first iteration of the inner for loop? e. In the IF
     * statement, what is the value of rowSum() (hint, refer to question 3)? f. Why
     * do you think currRow gets set to 0 after the If statement? g. What do you
     * think this method does? h. Would this method return true or false, remove the
     * comment for number 5 below to check your answer.
     */

    public boolean allRowsEqual() {
        int currRow = 0;
        for (int r = 0; r < mSquare.length; r++) {
            for (int c = 0; c < mSquare[0].length; c++) {
                currRow += mSquare[r][c];
            }
            if (currRow != rowSum()) {
                return false;
            }
            currRow = 0;
        }
        return true;
    }

    /*
     * 6. Complete the method allColsEqual() below so it returns true if all the
     * columns are equal. Remove the comment for #6 below to make sure it works
     */

    public boolean allColsEqual() {
        return false;
    }

    /*
     * 7. Examine the following code: Discuss with your neighbor the following: a.
     * What is the value of mSquare.length? b. What are the values of i as it
     * iterates the For Loop? c. For each value of i in the for loop, what is the
     * value of (mSquare.length - i - 1)? d. Which values of the 2D Array are
     * getting added to diagLeft? e. What would be returned by this method? Remove
     * the comment for #7 below to check your answer.
     */

    public int diagLeft() {
        int diagLeft = 0;
        for (int i = 0; i < mSquare.length; i++) {
            diagLeft += mSquare[i][mSquare.length - i - 1];
        }
        return diagLeft;
    }

    /*
     * 8. Discuss with your neighbor the following: a. What positions would be used
     * to add the values of the array diagonally the right? b. Complete the method
     * below to return the sum of the values in the array diagonally to the right.
     * c. Remove the comment for #8 below to make sure it works.
     */

    public int diagRight() {
        return 0;
    }

    /*
     * 9. At this point your program should work. If the label says it is a Magic
     * Square, then it totally works. If not, go back and check your work.
     */
    /*
     * 10. Scroll all the way down to main remove the comment to try out different
     * values
     */

    // Constructor: Creates the object

    public MagicSquare() {

    }

    // Overloaded Constructor: Creates the object with a given array
    public MagicSquare(int msquare[][]) {
        this.mSquare = msquare;
    }

    public boolean isMagicSquare() {
        if (allRowsEqual() && allColsEqual() && diagRight() == diagLeft() && diagRight() == rowSum()) {
            return true;
        }
        return false;
    }

    public String toString() {
        String str = "";
        for (int r = 0; r < mSquare.length; r++) {
            for (int c = 0; c < mSquare[0].length; c++) {
                str += mSquare[r][c] + "\t";
            }
            str += "\n";
        }
        return str;
    }

    public void Question2() {
        System.out.println("Question 2 Answers");
        System.out.println("mSquare[1][2]:  " + mSquare[1][2]);
        System.out.println("mSquare[3][1]:  " + mSquare[3][1]);
        try {
            System.out.println("mSquare[1][4]: " + mSquare[1][4]);
        } catch (Exception e) {
            System.out.println("mSquare[1][4] will result in a run time error.");
        }
    }

    public static void runOtherTests() {
        int[][] test1 = { { 2, 7, 6 }
                        , { 9, 5, 1 }
                        , { 4, 3, 8 }
                        };
        MagicSquare s1 = new MagicSquare(test1);
        System.out.println("Test 1");
        System.out.println(s1);
        System.out.println("Your Results: " + s1.isMagicSquare());
        System.out.println(s1.isMagicSquare() ? "Correct, this is a magic square\n" : "Oops, this was a magic square\n");
        System.out.println("_________________________________________");
        int[][] test2 = { {  1, 15, 14,  4 }
                        , { 12,  6,  7,  9 }
                        , {  8, 10, 11,  5 }
                        , { 13,  3,  2, 16 }
                        };
        MagicSquare s2 = new MagicSquare(test2);
        System.out.println("Test 2");
        System.out.println(s1);
        System.out.println("Your Results: " + s2.isMagicSquare());
        System.out.println(s2.isMagicSquare() ?
            "Correct, this is a magic square\n" : "Oops, this was a magic square\n"
        );
        System.out.println("_________________________________________");
        int[][] test3 = { {  8, 11, 14,  1 }
                        , { 13,  2,  7, 12 }
                        , {  3, 17,  9,  6 }
                        , { 10,  5,  4, 15 }
                        };
        MagicSquare s3 = new MagicSquare(test3);
        System.out.println("Test 3");
        System.out.println(s1);
        System.out.println("Your Results: " + s3.isMagicSquare());
        System.out.println(s3.isMagicSquare() ?
            "Oops, this is a magic square\n" : "Correct, this was not a magic square\n"
        );
    }

    // Main Method
    public static void main(String []args) {
        MagicSquare m = new MagicSquare();

        /* 1.  Remove the comment below to see the output to your 2d array to #1 */

        System.out.println(m.toString());

        /* 2. Remove the comment below to see the answers to #2 */
        
        // m.Question2();

        /* 3. Remove the comment below to see the answers to #3 */

        // System.out.println("Question 3: sum: " + m.rowSum());

        /* 4. Remove the comment below to see the answers to #4 */

        // System.out.println("Question 4: sum: " + m.colSum() + ", " + (m.rowSum() == m.colSum() ? "You totally got this!": "Keep trying"));

        /* 5. Remove the comment below to see the answers to #5 */

        // System.out.println("Question 5: Equal: " + m.allRowsEqual());

        /* 6. Remove the comment below to see the answers to #6 */

        // System.out.println("Question 6: Equal: " + m.allColsEqual() + (m.allColsEqual() ? ",  You totally got this!": "Keep trying")    );

        /* 7. Remove the comment below to see the answers to #7 */

        // System.out.println("Question 7: Diagonal Left Sum: " + m.diagLeft());

        /* 8. Remove the comment below to see the answers to #8 */

        // System.out.println("Question 8: Diagonal Left Sum: " + m.diagRight());

        /* 10. Remove the comment below to see if other values still work */
        runOtherTests();
    }
}