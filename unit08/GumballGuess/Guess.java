public class Guess {
    private String name;
    private int guess;

    public Guess(String name, int guess) {
        this.name = name;
        this.guess = guess;
    }

    public int getGuess() {
        return this.guess;
    }

    public String toString() {
        return name + ": " + guess;
    }
}