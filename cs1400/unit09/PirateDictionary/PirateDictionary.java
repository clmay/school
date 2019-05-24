import java.io.File;
import java.util.ArrayList;
import java.util.Scanner;

public class PirateDictionary {
    // Parallel arrays
    private ArrayList<String> english = new ArrayList<>();
    private ArrayList<String> pirate = new ArrayList<>();
    private String fileName = "pirate.txt";

    //  Constructor: loads the dictionary
    public PirateDictionary() {
        try {
            File fileIn = new File(fileName);
            Scanner readFile = new Scanner(fileIn);
            while (readFile.hasNext()) {
                english.add(readFile.nextLine());
                pirate.add(readFile.nextLine());
            }
            readFile.close();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    public String wordToPirate(String word) {
        String pirateWord = word;
        for (int i = 0; i < english.size(); i++) {
            if (english.get(i).equalsIgnoreCase(word)) {
                pirateWord = pirate.get(i);
                return pirateWord;
            }
        }
        return pirateWord;
    }

    public String sentenceToPirate(String sentence) {
        Scanner readSentence = new Scanner(sentence);
        String pirateSentence = "";
        while (readSentence.hasNext()) {
            String word = readSentence.next();
            pirateSentence += wordToPirate(word) + " ";
        }
        readSentence.close();
        return pirateSentence;
    }
}