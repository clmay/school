class LoopActivity {
    public static void main(String[] args) {

        // Initialize variables
        int number = 1;
        int sum = 0;

        // Loop starts at number == 1, repeats until number == 10
        while (number <= 10) {
            sum += number; // Every iteration adds the current value of `number` to `sum`
            number++; // And then increments the value of `number` by 1
        }

        // Output the result
        System.out.println("Sum: " + sum);

    } // end `main()`
} // end `LoopActivity`
