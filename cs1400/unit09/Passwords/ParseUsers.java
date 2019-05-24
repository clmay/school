import java.util.ArrayList;

public interface ParseUsers {

    public ArrayList<String> parseFile(String filePath);

    public ArrayList<String> parseUsernames(ArrayList<String> lines);

    public ArrayList<String> parsePasswords(ArrayList<String> lines);
}