import java.util.ArrayList;
import java.util.Scanner;

public class StudentGrades {

    public static void main(String[] args) {
        int choice = 0;
        String name;
        double score;
        Grade grade;
        Scanner scan = new Scanner(System.in);
        ArrayList<Grade> grades = new ArrayList<>();

        while (choice != 4) {
            printMenu();
            choice = Integer.parseInt(scan.nextLine());
            switch (choice) {
                case 1:
                    System.out.println("Enter the student's name:");
                    name = scan.nextLine();
                    System.out.println("Enter the student's score:");
                    score = Double.parseDouble(scan.nextLine());
                    grade = new Grade(name, score);
                    grades.add(grade);
                    break;
                case 2:
                    showStats(grades);
                    break;
                case 3:
                    showAll(grades);
                    break;
                case 4:
                    System.out.println("Enter name to search:");
                    name = scan.nextLine();
                    searchByName(name, grades);
                    break;
                default:
                    break;
            }
        }
    }

    public static void printMenu() {
        System.out.println("1. Add student");
        System.out.println("2. View stats");
        System.out.println("3. View all");
        System.out.println("4. Search by name");
        System.out.println("5. Quit");
    }

    public static double avgGrade(ArrayList<Grade> grades) {
        double sum = 0.0;
        double avg = 0.0;
        for (Grade g : grades) {
            sum += g.getScore();
        }
        avg = sum / grades.size();
        return avg;
    }

    public static Grade maxGrade(ArrayList<Grade> grades) {
        String name = grades.get(0).getName();
        double curr = 0.0;
        double max = 0.0;

        for (Grade g : grades) {
            curr = g.getScore();
            if (curr > max) {
                max = curr;
                name = g.getName();
            }
        }
        Grade result = new Grade(name, max);
        return result;
    }

    public static void showStats(ArrayList<Grade> grades) {
        double avg = avgGrade(grades);
        Grade max = maxGrade(grades);
        System.out.println("Average: " + avg);
        System.out.println("Max: " + max.getName() + ": " + max.getScore());
    }

    public static void showAll(ArrayList<Grade> grades) {
        for (Grade g : grades) {
            System.out.println("Student: " + g.getName() + ", Grade: " + g.getScore());
        }
    }

    public static void searchByName(String name, ArrayList<Grade> grades) {
        Grade result = null;
        for (Grade g : grades) {
            if (g.getName().contains(name)) {
                result = g;
            }
        }
        if (result == null) {
            System.out.println("No matches found.");
        } else {
            System.out.println("Student: " + result.getName() + ", Grade: " + result.getScore());
        }
    }
}