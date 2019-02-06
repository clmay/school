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

class VowelGUI extends JPanel {
  // Create window
  private JFrame window = new JFrame("Count Vowels");

  // Initialize components
  private JLabel inputLabel = new JLabel("Enter a phrase:");
  private JTextField inputField = new JTextField();
  private JButton countButton = new JButton("Count");
  private JCheckBox yCheckbox =  new JCheckBox("Count 'Y' as a vowel");
  private JLabel countLabel = new JLabel("Count:");

  // Count 'y' characters?
  // This can be changed by the yCheckbox's listener
  boolean countYs = false;

  // Constructor
  public VowelGUI() {
    // Initialize window
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    window.setSize(360, 200);
    setLayout(null);

    // Position components
    // setBounds(x, y, width, height) (https://docs.oracle.com/javase/8/docs/api/java/awt/Component.html#setBounds-int-int-int-int-)
    inputLabel.setBounds(20, 40, 100, 20);
    inputField.setBounds(140, 40, 200, 20);
    countButton.setBounds(20, 80, 100, 20);
    yCheckbox.setBounds(140, 80, 200, 20);
    countLabel.setBounds(20, 120, 100, 20);

    // Add components to `Vowel` object
    this.add(inputLabel);
    this.add(inputField);
    this.add(countButton);
    this.add(yCheckbox);
    this.add(countLabel);

    // Add `Vowel` to window
    window.add(this);

    // Render window
    window.setVisible(true);

    // Listeners
    yCheckbox.addItemListener(new ItemListener() {
      public void itemStateChanged(ItemEvent e) {
        if (yCheckbox.isSelected()) {
          countYs = true;
        } else {
          countYs = false;
        }
      }
    });

    countButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        String input = inputField.getText();
        int count = getVowelCount(input);
        if (countYs) {
          count += getYCount(input);;
        }
        countLabel.setText("Count: " + count);
      }
    });
  }

  private static boolean isVowel(char letter) {
    boolean result;
    switch (letter) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        result = true;
        break;
      default:
        result = false;
        break;
    }
    return result;
  }

  private static boolean isY(char letter) {
    boolean result;
    switch (letter) {
      case 'Y':
      case 'y':
        result = true;
        break;
      default:
        result = false;
        break;
    }
    return result;
  }

  private static int getVowelCount(String phrase) {
    int count = 0;
    for (int i = 0; i < phrase.length(); i++) {
      if (isVowel(phrase.charAt(i))) {
        count++;
      }
    }
    return count;
  }

  private static int getYCount(String phrase) {
    int count = 0;
    for (int i = 0; i < phrase.length(); i++) {
      if (isY(phrase.charAt(i))) {
        count++;
      }
    }
    return count;
  }

  public static void main(String[] args) {
    new VowelGUI();
  }
}
