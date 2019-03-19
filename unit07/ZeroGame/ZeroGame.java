package ZeroGame;

import java.util.Random;

public class ZeroGame {
	private int numbers[];
	private static Random generator = new Random();

	public ZeroGame() {
		// Instantiate the array of 10 values and fill them with the numbers 0 through 9
		// Then mix the numbers up so they are out of order

	}

	private void swap(int pos1, int pos2) {
		// Swap the two positions in the list
	}

	public int getZeroPos() {
		// Return the position of the zero in the list
		return -1;
	}

	public void moveRight() {
		// If the zero is all the way to the right, don't do anything
		// Othewise: Swap the zero with the number to the right
	}

	public void moveLeft() {
		// If the zero is all the way to the left, don't do anything
		// Otherwise: Swap the zero with the number to the left
	}

	public void flip() {
		// If the zero is on an end, don't do anything
		// Otherwise, swap the two numbers on either side of the zero
	}

	public boolean inOrder() {
		// Return true if the numbers are in order
		return false;
	}

	public String toString() {
		String str = "";
		str += numbers[0];
		for (int i = 1; i < numbers.length; i++) {
			str += " " + numbers[i];
		}
		return str;
	}
}