import java.awt.event.*;
import javax.swing.JPanel;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.JOptionPane;

class Pig extends JPanel {
  private JFrame window = new JFrame("The Game of Pig");        // Create the window
  private JLabel dieLabel = new JLabel("Current die value.");   // Initialize components
  private JLabel counterLabel = new JLabel("Number of rolls.");
  private JLabel userScoreLabel = new JLabel("Player Score.");
  private JLabel aiScoreLabel = new JLabel("Computer Score.");
  private JButton rollButton = new JButton("Roll");
  private JButton stopButton = new JButton("End Round");

  // Initialize players
  private PigPlayer user = new PigPlayer();
  private PigPlayer ai = new PigPlayer();

  public Pig() {
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // Initialize window
    window.setSize(300, 300);
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

    rollButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        user.rollDie();
        if (user.playerWon()) {
          JOptionPane.showMessageDialog(null, "You win!");
          return;
        }
        update();
      }
    });
    stopButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        if (user.isPlayerTurn()) {
          user.rollDie();
          if (user.playerWon()) {
            JOptionPane.showMessageDialog(null, "You win!");
          }
          user.endRound();
          update();
        } else {
          aiRound();
        }
      }
    });
  } // end Pig constructor
  public void aiRound() {
    do {
      ai.rollDie();
      if (ai.playerWon()) {
        JOptionPane.showMessageDialog(null, "Computer won!");
        break;
      }
    } while (ai.getRoundScore() < 10);
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
  public static void main(String[] args) {
    new Pig();
  }
}
