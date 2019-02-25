import java.util.Scanner;

public class BattleRPG {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    String player_name, ai_name;

    System.out.println("Hello, bold one. What is your name?");
    player_name = scan.nextLine();

    Character p = new Character(player_name, "Player");
    Character ai = new Character("Alfred", "NPC");
    Monster m = new Monster("Gurjifrey", "Barracuda");

    p.greet();
    ai.greet();
    m.greet();
  }

}
