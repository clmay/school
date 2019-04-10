import java.io.File;
import java.util.Scanner;

public class SQLBuilder {

    public static void main(String[] args) {
        SQLTable tracks = new SQLTable("track", "trackID, name, albumID, mediatypeID, genreID, composer, milliseconds, bytes, unitprice");

        System.out.println(SQLBuilder.insertAll(tracks));
    }

    public static String insertAll(SQLTable table) {
        String output = "INSERT ALL \n";
        try {
            String tableName = table.getName();
            String tableCols = table.getColumns();
            File inputFile = new File(tableName + "s.txt");
            Scanner readInput = new Scanner(inputFile);
            while (readInput.hasNext()) {
                output += "    INTO " + tableName + "(" + tableCols + ")\n";
                output += "    VALUES (";
                String currLine = readInput.nextLine();
                for (int i = 0; i < currLine.length(); i++) {
                    if (currLine.charAt(i) == '\'') {
                        output += "'";
                    }
                    if (currLine.charAt(i) == '|') {
                        if (Character.isDigit(currLine.charAt(i - 1)) == false) {
                            output += "', ";
                        } else if (Character.isDigit(currLine.charAt(i + 1)) == false) {
                            output += ", '";
                        } else {
                                output += ", ";
                        }
                    } else {
                        output += currLine.charAt(i);
                    }
                }
                output += ")\n\n";
            }
            output += "SELECT 1 FROM DUAL;";
            readInput.close();
        } catch (Exception e) {
            System.out.println("Error opening file: " + e.getMessage());
        }
        return output;
    }
}