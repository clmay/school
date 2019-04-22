import java.util.ArrayList;

public class Hangman {
    private String challenge; // the word for the user to guess
    private String progress; // the text to display to the user
    private ArrayList<Character> misses; // holds the letters guessed that were not in the solution string

    // Constructor
    public Hangman(String challenge) {
        this.challenge = challenge;
        this.progress = this.initProgress(challenge); // sets `this.progress` to a string of underscores matching `challenge`
        this.misses = new ArrayList<>();
    }

    // Public methods
    public int getNumMisses() {
        return this.misses.size();
    }

    public boolean isMiss(char c) {
        if (this.misses.contains(c)) {
            return false;
        }
        for (int i = 0; i < this.challenge.length(); i++) {
            if (this.challenge.charAt(i) == c) {
                return false;
            }
        }
        return true;
    }

    public void addMiss(char c) {
        this.misses.add(c);
    }

    public boolean isSolved() {
        for (int i = 0; i < this.challenge.length(); i++) {
            if (this.challenge.charAt(i) != this.progress.charAt(i)) {
                return false;
            }
        }
        return true;
    }

    public void updateProgress(char c) {
        String tmp = "";
        for (int i = 0; i < this.challenge.length(); i++) {
            if (this.challenge.charAt(i) == c) {
                tmp += c;
            } else {
                tmp += this.progress.charAt(i);
            }
        }
        this.progress = tmp;
    }

    public void printMisses() {
        if (this.misses.size() > 0) {
            String misses = "";
            if (this.misses.size() == 1) {
                System.out.println("Miss: " + this.misses.get(0));
            } else {
                misses += this.misses.get(0);
                for (int i = 1; i < this.misses.size(); i++) {
                    misses += ", " + this.misses.get(i);
                }
                System.out.println("Misses: " + misses);
            }
        }
    }

    public void printProgress() {
        int remLetters = 0;
        for (int i = 0; i < this.progress.length(); i++) {
            if (this.progress.charAt(i) == '_') {
                remLetters++;
            }
        }
        System.out.println("Current progress: " + this.progress);
        System.out.println("Letters remaining: " + remLetters);
    }

    // Private method
    private String initProgress(String input) {
        // sets `this.progress` to a string of underscores matching `challenge`
        String underscores = "";
        for (int i = 0; i < this.challenge.length(); i++) {
            underscores += "_";
        }
        return underscores;
    }
}