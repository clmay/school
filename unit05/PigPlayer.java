import java.util.Random;

class PigPlayer {

  // Instance variables
  private static Random gen = new Random();

  private int dieValue; // class' die variable
  private int roundScore;
  private int totalScore;

  // Constructor
  public PigPlayer() {
    dieValue = 1;
    roundScore = 0;
    totalScore = 0;
  }

  public int getDieValue() {
    return dieValue;
  }

  public int getRoundScore() {
    return roundScore;
  }

  public int getTotalScore() {
    return totalScore;
  }

  // Roll the die
  // If the player rolls a '1', reset the the round score
  // Otherwise, add the roll to the round score
  public void rollDie() {
    dieValue = gen.nextInt(6) + 1;
    if (dieValue == 1) {
      resetRoundScore();
    } else {
      roundScore += dieValue;
    }
  }

  public void resetRoundScore() {
    roundScore = 0;
  }

  // At the end of a round, add the round score to the player's total score
  public void endRound() {
    totalScore += roundScore;
  }

  public boolean playerWon() {
    return totalScore >= 50;
  }

}
