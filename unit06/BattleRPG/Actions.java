interface Actions {
  public void setName(String name);

  public void setType(String type);

  public void setHealth(int health);

  public void setPower(int power);

  public void setDefenses(boolean state);

  public void resetDefenses();

  public String getName();

  public String getType();

  public int getHealth();

  public int getPower();

  public boolean getDefenseStatus();

  public void attack(Monster target);

  public void heal();

  public void defend();

  public void powerUp();
}
