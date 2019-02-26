import java.util.Random;
import java.util.Scanner;

public class BattleRPG {
  private static Random gen = new Random();
  private static Scanner scan = new Scanner(System.in);
  private static Monster player = new Monster("Your Monster", "Trained Monster");
  private static Monster computer = new Monster("Enemy Attacker", "Wild Monster");
  private static int choice = 0;

  public BattleRPG() {
    prologue();
    int counter = 1;
    while (true) {
      choice = 0;
      while (choice < 1 || choice > 2) {
        travelMenu();
        choice = choose();
      }
      if (choice == 2) {
        farewell();
      }
      if (counter % 3 == 0) {
        System.out.println("You've encountered a wild monster!");
        System.out.println("You try to flee, but the monster blocks your escape!");
        battle();
      } else {
        System.out.println("You're traveling along in peace. Nothing interesting here.\n");
      }
      counter++;
    }
  }

  private static void gatekeeperMenu() {
    System.out.println("What would you like to do?");
    System.out.println("   1. Continue");
    System.out.println("   2. Turn around");
  } // end gatekeeperMenu()

  private static void travelMenu() {
    System.out.println("What would you like to do?");
    System.out.println("   1. Keep moving");
    System.out.println("   2. Quit");
  } // end travelMenu()

  private static void battleMenu() {
    System.out.println("It's your turn. Would you like to:");
    System.out.println("   1. Attack");
    System.out.println("   2. Heal");
    System.out.println("   3. Defend");
    System.out.println("   4. Power Up");
  } // end battleMenu()

  private static void pause() {
    try {
      Thread.sleep(1000);
    } catch (InterruptedException e) {
      System.out.println("Unable to sleep.");
      e.printStackTrace();
    }
  } // end pause()

  private static void pause(int secs) {
    int ms = 1000 * secs;
    try {
      Thread.sleep(ms);
    } catch (InterruptedException e) {
      System.out.println("Unable to sleep.");
      e.printStackTrace();
    }
  } // end pause(int)

  private static int choose() {
    choice = 0;
    System.out.print("Your choice: ");
    choice = Integer.parseInt(scan.nextLine());
    System.out.println();
    return choice;
  } // end choose()

  private static void farewell() {
    System.out.println("Gatekeeper: Ah, well, too bad.");
    pause();
    System.out.println("   Still, that's probably wise.");
    pause();
    System.out.println("   Take care of yourself.");
    pause();
    System.exit(0);
  } // end farewell()

  private static void prologue() {
    String player_name;
    System.out.println("\nGatekeeper: Greetings, reckless traveler.");
    pause();
    System.out.println("   Hasn't anyone told you? This land is dangerous.");
    pause();
    System.out.println("   There are many strange and wild beasts.");
    pause();
    System.out.println("   Do you dare continue?\n");
    pause();
    gatekeeperMenu();
    choice = choose();
    if (choice == 2) {
      farewell();
    }
    System.out.println("Gatekeeper: Very well then.");
    pause();
    System.out.println("   Still, you'll need a way to protect yourself.\n");
    pause(2);
    System.out.println("The gatekeeper hands you a crate.");
    pause();
    System.out.println("A small but fierce looking creature is asleep inside.\n");
    pause(2);
    System.out.println("Gatekeeper: Oh, I almost forgot. How do you call yourself?");
    System.out.print("Enter your name: ");
    player_name = scan.nextLine();
    System.out.println();
    System.out.println("Gatekeeper: " + player_name + "...? Foreigners have such strange names.");
    pause();
    System.out.println("   In any case, good luck on your journey.");
    pause();
    System.out.println("   I hope you'll make it back this way some time.\n");
    pause(2);
  } // end prologue()

  private static void battle() {
    int turn = 1;
    while (true) {
      choice = 0;
      System.out.println("\nTurn: " + (turn));
      System.out.println("   " + player.getName() + ": " + player.getHealth() + " HP.");
      System.out.println("   " + computer.getName() + ": " + computer.getHealth() + " HP.");
      while (choice < 1 || choice > 4) {
        battleMenu();
        choice = choose();
      }
      switch (choice) {
        case 1:
          player.attack(computer);
          break;
        case 2:
          player.heal();
          break;
        case 3:
          player.defend();
          break;
        case 4:
          player.powerUp();
          break;
      }
      choice = gen.nextInt(6) + 1;
      System.out.println();
      switch (choice) {
        case 1:
        case 2:
        case 3:
          computer.attack(player);
          break;
        case 4:
          computer.heal();
          break;
        case 5:
          computer.defend();
          break;
        case 6:
          computer.powerUp();
          break;
      }
      if (player.getHealth() <= 0) {
        System.out.println("Your monster has perished!");
        System.out.println("\nThere is no one left to defend you.");
        System.out.println("Your vision fades to darkness.");
        System.exit(0);
      }
      if (computer.getHealth() <= 0) {
        System.out.println("Your monster has defeated " + computer.getName() + "!");
        System.out.println("You travel onward.\n");
        break;
      }
      player.resetDefenses();
      computer.resetDefenses();
      turn++;
    }
  } // end battle()

  public static void main(String[] args) {
    new BattleRPG();
  } // end main()

}
