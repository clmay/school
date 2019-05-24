import java.util.Random;

class PigPlayer {
  // Instance variables
  private static Random gen = new Random();
  private int winningScore; // the score needed to win the game
  private int counter; // counts the number of rolls
  private int dieValue; // the current die value
  private int roundScore; // points won this round
  private int totalScore; // total score

  public PigPlayer() {  // Constructor
    winningScore = 100;
    counter = 0;
    dieValue = 1;
    roundScore = 0;
    totalScore = 0;
  }
  
  public int getCounter() {
    return counter;
  }
  public void incrementCounter() {
    counter++;
  }
  public void resetCounter() {
    counter = 0;
  }
  public int getDieValue() {
    return dieValue;
  }
  public int getRoundScore() {
    return roundScore;
  }
  public void updateRoundScore() {
    roundScore += dieValue;
  }
  public void resetRoundScore() {
    roundScore = 0;
  }
  public int getTotalScore() {
    return totalScore;
  }
  public void updateTotalScore() {
    totalScore += roundScore;
  }
  public void rollDie() { // Roll the die
    incrementCounter();
    dieValue = gen.nextInt(6) + 1;
    updateRoundScore();
  }
  public void endRound() {
    updateTotalScore();
    resetRoundScore();
    resetCounter();
  }
  public boolean playerWon() {
    return totalScore + roundScore >= winningScore;
  }
}
