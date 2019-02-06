import javax.swing.JPanel;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;
import javax.swing.JCheckBox;

import java.awt.event.ActionEvent;
import java.awt.event.ItemEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemListener;

class Palindrome extends JPanel {
  // Create window
  private JFrame window = new JFrame("Palindrome Test");

  // Initialize components
  private JLabel inputLabel = new JLabel("Enter text:");
  private JTextField inputField = new JTextField();
  private JButton testButton = new JButton("Test");
  private JLabel resultLabel = new JLabel("Enter text to test if it is a palindrome.");

  // Constructor
  public Palindrome() {
    // Initialize window
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    window.setSize(400, 200);
    setLayout(null);

    // Position components
    // setBounds(x, y, width, height) (https://docs.oracle.com/javase/8/docs/api/java/awt/Component.html#setBounds-int-int-int-int-)
    inputLabel.setBounds(20, 40, 100, 20);
    inputField.setBounds(140, 40, 200, 20);
    testButton.setBounds(20, 80, 100, 20);
    resultLabel.setBounds(20, 120, 360, 20);

    // Add components to `Vowel` object
    this.add(inputLabel);
    this.add(inputField);
    this.add(testButton);
    this.add(resultLabel);

    // Add `Palindrome` to window
    window.add(this);

    // Render window
    window.setVisible(true);

    // Listeners
    testButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        String input = inputField.getText();
        if (isPalindrome(input)) {
          resultLabel.setText("\"" + input + "\" is a palindrome.");
        } else {
          resultLabel.setText("\"" + input + "\" is an emordnilap (Google it).");
        }
      }
    });
  }

  private static String clean(String input) {
    String result = "";
    for (int i = 0; i < input.length(); i++) {
      char letter = input.charAt(i);
      if (   letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z') {
        result += letter;
      }
    }
    return result;
  }

  private static String reverse(String input) {
    String result = "";
    for (int i = 0; i < input.length(); i++) {
      result = input.charAt(i) + result;
    }
    return result;
  }

  private static boolean isPalindrome(String input) {
    input = clean(input);
    String reverse = reverse(input);
    if (reverse.equalsIgnoreCase(input) == true) {
      return true;
    } else {
      return false;
    }
  }

  public static void main(String[] args) {
    new Palindrome();
  }
}
