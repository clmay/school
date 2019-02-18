import java.awt.event.*;

import javax.swing.JPanel;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JButton;
import javax.swing.JOptionPane;

class Pig extends JPanel {
  // Create the window
  private JFrame window = new JFrame("The Game of Pig");

  // Initialize components
  private JLabel dieLabel = new JLabel("Current die value.");
  private JLabel userScoreLabel = new JLabel("Player Score.");
  private JLabel aiScoreLabel = new JLabel("Computer Score.");
  private JButton rollButton = new JButton("Roll");
  private JButton stopButton = new JButton("End Round");

  // Initialize players
  private PigPlayer user = new PigPlayer();
  private PigPlayer ai = new PigPlayer();

  public Pig() {
    // Initialize window
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    window.setSize(300, 240);
    setLayout(null);

    // Position components
    // setBounds(x, y, width, height) (https://docs.oracle.com/javase/8/docs/api/java/awt/Component.html#setBounds-int-int-int-int-)
    dieLabel.setBounds(30, 20, 270, 20);
    userScoreLabel.setBounds(30, 60, 270, 20);
    aiScoreLabel.setBounds(30, 100, 270, 20);
    rollButton.setBounds(20, 140, 100, 30);
    stopButton.setBounds(140, 140, 100, 30);

    // Add components to `Pig` object
    this.add(dieLabel);
    this.add(userScoreLabel);
    this.add(aiScoreLabel);
    this.add(rollButton);
    this.add(stopButton);

    // Add `Pig` to window
    window.add(this);

    // Render window
    window.setVisible(true);

    rollButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        user.rollDie();
        update();
        if (user.playerWon()) {
          JOptionPane.showMessageDialog(null, "You win!");
        }
      }
    });

    stopButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        user.endRound();
        if (user.playerWon()) {
          JOptionPane.showMessageDialog(null, "You win!");
        }
      }
    });

  } // end Pig()

  public void update() {
    dieLabel.setText("Die: " + user.getDieValue());
    userScoreLabel.setText(
      "Player 1 Round Score: " + user.getRoundScore() + "\nTotal Score: " + user.getTotalScore());
    aiScoreLabel.setText(
      "Computer Round Score: " + ai.getRoundScore() + "\nTotal Score: " + ai.getTotalScore());
  }

  public static void main(String[] args) {
    new Pig();
  }
}
