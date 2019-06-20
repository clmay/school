import javax.swing.*;
import java.util.*;
import java.awt.event.*;

public class GumballGuessUI extends JPanel {
    private static final long serialVersionUID = 1L;
    // Windows Components
    private JFrame window = new JFrame("Gumball Guess");
    private JLabel nameLabel = new JLabel("Name: ");
    private JLabel guessLabel = new JLabel("Guess: ");
    private JLabel statsLabel = new JLabel("Winner: ");
    private JLabel jarLabel = new JLabel(new ImageIcon(getClass().getResource("jar.png")));
    private JTextField nameField = new JTextField("");
    private JTextField guessField = new JTextField("");
    private JButton guessButton = new JButton("Add Guess");
    private JButton checkButton = new JButton("Show Winner");
    // Random Generator
    private Random gen = new Random();
    private int numCandies = gen.nextInt(200) + 200;

    // ArrayList of Guess objects
    private ArrayList<Guess> guesses = new ArrayList<>();

    // Constructor
    public GumballGuessUI() {
        // Null layout for absolute positioning
        setLayout(null);
        // Set Absolute positioning
        nameLabel.setBounds(10, 10, 100, 30);
        nameField.setBounds(120, 10, 150, 30);
        guessLabel.setBounds(10, 50, 100, 30);
        guessField.setBounds(120, 50, 150, 30);
        guessButton.setBounds(160, 90, 110, 30);
        statsLabel.setBounds(10, 140, 300, 60);
        checkButton.setBounds(160, 220, 110, 30);
        jarLabel.setBounds(280, 10, 180, 180);
        // Add components to window
        add(nameLabel);
        add(nameField);
        add(guessLabel);
        add(guessField);
        add(guessButton);
        add(statsLabel);
        add(checkButton);
        add(jarLabel);
        // Exit program when window closes
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setSize(500, 400);
        window.add(this);
        window.setVisible(true);
        // Event for guessButton
        guessButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String name = nameField.getText();
                int guess = Integer.parseInt(guessField.getText());
                Guess g = new Guess(name, guess);
                guesses.add(g);
                nameField.setText("");
                guessField.setText("");
            }
        });
        checkButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                Guess winner = guesses.get(0);
                int best = Math.abs(winner.getGuess() - numCandies);
                for (Guess g : guesses) {
                    int close = Math.abs(g.getGuess() - numCandies);
                    if (close < best) {
                        best = close;
                        winner = g;
                    }
                }
                statsLabel.setText("<html>Winner: " + winner + "<br>" + "Candies: " + numCandies + "</html>");
            }
        });
    }

    public static void main(String[] args) {
        new GumballGuessUI();
    }
}