package MinMax;

import java.util.Random;

public class MyList implements MinMax {
    private int[] numbers = new int[20];
    private static Random generator = new Random();

    public MyList() {
        for (int item : numbers) {
            item = generator.nextInt(100) + 1;
        }
    }

    public int getMin(int[] arr) {
        int min = arr[0];
        for (int item : arr) {
            if (item < min) {
                min = num;
            }
        }
        return min;
    }

    public int getMax(int[] arr) {
        int max = arr[0];
        for (int item : arr) {
            if (item > max) {
                max = num;
            }
        }
        return max;
    }

    public String toString(int[] arr) {
        return null;
    }

}