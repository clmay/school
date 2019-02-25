public class Monster {
  public String name;
  public String type;

  public Monster(String name, String type) {
    this.name = name;
    this.type = type;
  }

  public void greet() {
    System.out.println("Hello, my name is " + this.name + " and I am a Monster of type " + this.type);
  }
}
