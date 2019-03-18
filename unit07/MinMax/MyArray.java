package MinMax;

import java.util.Random;

public class MyArray implements MinMax {
    private int[] numbers = new int[20];
    private static Random generator = new Random();

    public MyArray() {
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = generator.nextInt(100) + 1;
        }
    }

    public int getMin() {
        int min = this.numbers[0];
        for (int item : this.numbers) {
            if (item < min) {
                min = item;
            }
        }
        return min;
    }

    public int getMax() {
        int max = this.numbers[0];
        for (int item : this.numbers) {
            if (item > max) {
                max = item;
            }
        }
        return max;
    }

    public String toString() {
        String out = "";
        for (int item : this.numbers) {
            out += " " + item;
        }
        return out;
    }

    public boolean hasDuplicates() {
        return false;
    }

}