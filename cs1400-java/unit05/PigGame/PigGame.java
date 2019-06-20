import java.awt.event.*;
import javax.swing.JPanel;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.JOptionPane;

class PigGame extends JPanel {
  private JFrame window = new JFrame("The Game of Pig");        // Create the window
  private JLabel dieLabel = new JLabel("Current die value.");   // Initialize components
  private JLabel counterLabel = new JLabel("Number of rolls.");
  private JLabel userScoreLabel = new JLabel("Player Score.");
  private JLabel aiScoreLabel = new JLabel("Computer Score.");
  private JButton rollButton = new JButton("Roll");
  private JButton stopButton = new JButton("End Round");
  private PigPlayer user = new PigPlayer();                     // Initialize players
  private PigPlayer ai = new PigPlayer();

  public PigGame() {                                                // Constructor
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);      // Initialize window
    window.setSize(320, 200);
    setLayout(null);
    dieLabel.setBounds(30, 20, 100, 20);        // Position components
    counterLabel.setBounds(140, 20, 200, 20);   // setBounds(x, y, width, height)
    userScoreLabel.setBounds(30, 60, 270, 20);  // (https://docs.oracle.com/javase/8/docs/api/java/awt/Component.html#setBounds-int-int-int-int-)
    aiScoreLabel.setBounds(30, 100, 270, 20);
    rollButton.setBounds(20, 140, 100, 30);
    stopButton.setBounds(140, 140, 100, 30);
    this.add(dieLabel);
    this.add(counterLabel);
    this.add(userScoreLabel);
    this.add(aiScoreLabel);
    this.add(rollButton);
    this.add(stopButton);
    window.add(this);         // Add `Pig` to window
    window.setVisible(true);  // Render window
    update();                 // Init game variables

    rollButton.addActionListener(new ActionListener() {         // Listeners
      public void actionPerformed(ActionEvent e) {
        user.rollDie();
        update();
        if (user.getDieValue() == 1) {
          user.endRound();
          update();
          aiRound();
        }
        if (user.playerWon()) {
          JOptionPane.showMessageDialog(null, "You won!");
        }
      }
    });
    stopButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        user.endRound();
        update();
        aiRound();
      }
    });
  }

  public void aiRound() {                                     // Methods
    do {
      ai.rollDie();
      update();
      if (ai.getDieValue() == 1) {
        ai.endRound();
        update();
        break;
      }
      if (ai.playerWon()) {
        JOptionPane.showMessageDialog(null, "Computer won!");
        break;
      }
    } while (ai.getRoundScore() < 15);
    ai.endRound();
    update();
  }
  public void update() {
    dieLabel.setText("Die: " + user.getDieValue());
    counterLabel.setText("Number of rolls: " + user.getCounter());
    userScoreLabel.setText(
      "Player 1 Round Score: " + user.getRoundScore() + "\nTotal Score: " + user.getTotalScore());
    aiScoreLabel.setText(
      "Computer Round Score: " + ai.getRoundScore() + "\nTotal Score: " + ai.getTotalScore());
  }
  public static void main(String[] args) {                    // Main
    new PigGame();
  }
}
