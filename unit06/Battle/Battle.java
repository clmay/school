import java.util.Scanner;

public class Battle {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    String player_name, ai_name;

    System.out.println("Hello, bold one. What is your name?");
    player_name = scan.nextLine();
    // ai_name = jumble(player_name); // Eventually, we will want to programmatically create the ai's name

    Character p = new Character(player_name, "Player");
    Character ai = new Character("Alfred", "NPC");
    Monster m = new Monster("Gurjifrey", "Barracuda");

    p.greet();
    ai.greet();
    m.greet();
  }

}
