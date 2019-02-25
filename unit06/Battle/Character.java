public class Character {
  public String name;
  public String type;

  public Character(String name, String type) {
    this.name = name;
    this.type = type;
  }

  public void greet() {
    System.out.println("Hello, my name is " + this.name + " and I am a Character of type " + this.type);
  }
}
