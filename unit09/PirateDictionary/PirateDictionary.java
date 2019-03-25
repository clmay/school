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
        File fileIn = new File(fileName);
        try {
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

    public String toPirate(String word) {
        for (int i = 0; i < english.size(); i++) {
            if (english.get(i).equals(word)) {
                return pirate.get(i);
            } else {
                return word;
            }
        }
    }

    public String toPirateSentence(String sentence) {
        Scanner readSentence = new Scanner(sentence);
        String pirateSentence = "";
        while (readSentence.hasNext()) {
            String word = scanSentence.next();
            pirateSentence += toPirate(word) + " ";
        }
        return pirateSentence;
        scanSentence.close();
    }
}