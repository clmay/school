import java.util.random;

class PigPlayer {

  // Instance variables
  private static Random gen = new Random();

  private int dieValue;
  private int roundScore;
  private int totalScore;

  // Constructor
  public PigPlayer() {
    dieValue = 1;
    roundScore = 0;
    totalScore = 0;
  }

  public int getDieValue() {
    return die;
  }

  public int getRoundScore() {
    return roundScore;
  }

  public int getTotalScore() {
    return totalScore;
  }

}
