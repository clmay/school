import java.io.File;
import java.util.ArrayList;
import java.util.Scanner;

public class RandomWord {
    private ArrayList<String> words;
    private ArrayList<String> definitions;
    private ArrayList<String> examples;

    public RandomWord(String filePath) {
        this.words = new ArrayList<String>();
        this.definitions = new ArrayList<String>();
        this.examples = new ArrayList<String>();
        try {
            File file = new File(filePath);
            Scanner read = new Scanner(file);
            while (read.hasNext()) {
                String line = read.nextLine();
                int pipe1 = line.indexOf("|");
                int pipe2 = line.indexOf("|", pipe1 + 1);
                String word = line.substring(0, pipe1);
                String definition = line.substring(pipe1 + 1, pipe2);
                String example = line.substring(pipe2 + 1);
                this.words.add(word);
                this.definitions.add(definition);
                this.examples.add(example);
            }
            read.close();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    public String getWord(int index) {
        return this.words.get(index);
    }

    public String getDefinition(int index) {
        return this.definitions.get(index);
    }

    public String getExample(int index) {
        return this.examples.get(index);
    }

    public int size() {
        return this.words.size();
    }
}