public class Monster implements Actions, Debug {
  private String name;
  private String type;
  private int health;
  private int power;
  private boolean defensesUp = false;

  private int defaultHealth = 50;
  private int defaultPower = 10;

  public Monster(String name, String type) {
    this.setName(name);
    this.setType(type);
    this.setHealth(defaultHealth);
    this.setPower(defaultPower);
  }

  public void setName(String name) {
    this.name = name;
  }

  public void setType(String type) {
    this.type = type;
  }

  public void setHealth(int health) {
    this.health = health;
  }

  public void setPower(int power) {
    this.power = power;
  }

  public void setDefenses(boolean state) {
    this.defensesUp = state;
  }

  public void resetDefenses() {
    this.defensesUp = false;
  }

  public String getName() {
    return this.name;
  }

  public String getType() {
    return this.type;
  }

  public int getHealth() {
    return this.health;
  }

  public int getPower() {
    return this.power;
  }

  public boolean getDefenseStatus() {
    return this.defensesUp;
  }

  public void attack(Monster target) {
    if (target.getDefenseStatus() == true) {
      System.out.println(target.name + " was expecting the attack!");
      System.out.println("The attack did no damage!");
    } else {
      target.health -= this.power;
      System.out.println(this.name + " attacks " + target.name + ".");
      System.out.println("The attack does " + this.power + " in damage.");
      System.out.println(target.name + " has " + target.health + " HP remaining.");
    }
  }

  public void heal() {
    this.health += this.power;
    System.out.println(this.name + " heals itself.");
    System.out.println(this.name + " has " + this.health + " HP.");
  }

  public void defend() {
    this.setDefenses(true);
    System.out.println(this.name + " prepares to defend itself.");
  }

  public void powerUp() {
    this.power += defaultPower;
    System.out.println(this.name + " focuses its power.");
  }

  public void debug() { // use if you want to debug object's state
    System.out.println("Object:");
    System.out.println("   Name: " + this.getName());
    System.out.println("   Type: " + this.getType());
    System.out.println("   Health: " + this.getHealth());
    System.out.println("   Power: " + this.getPower());
    System.out.println("   Defense Status: " + this.getDefenseStatus());
  }

}
