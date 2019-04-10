import javax.swing.*;
import java.awt.event.*;

class PirateSpeak extends JPanel {
    private static final long serialVersionUID = 1L;
    // Windows Components
    private JFrame window = new JFrame("Pirate Speak");
    private JLabel lblText = new JLabel("Ahoy, haul yer text into yonder box:");
    private JTextArea txtEnglish = new JTextArea();
    private JTextArea txtPirate = new JTextArea();
    private JButton btnTranslate = new JButton("Translate");
    private PirateDictionary arr = new PirateDictionary();
    
    // Constructor: Sets up the window
    public PirateSpeak() {
        // Absolute layout requires null
        setLayout(null);
        // Sets x, y, w, h of each component
        lblText.setBounds(10, 10, 250, 30);
        txtEnglish.setBounds(10, 50, 350, 150);
        btnTranslate.setBounds(260, 210, 100, 30);
        txtPirate.setBounds(10, 250, 350, 150);
        // add components to panel
        add(lblText);
        add(txtEnglish);
        add(txtPirate);
        add(btnTranslate);
        // Adds panel to window
        window.add(this);
        // Closes the program when window closes
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setSize(400, 500);
        window.setVisible(true);
        // Event for btnTranslate, converts sentence to pirate
        btnTranslate.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                // Convert the code to Pirate Speak
                // Display the text in the text box
                String english = txtEnglish.getText();
                String pirate = arr.sentenceToPirate(english);
                txtPirate.setText(pirate);
            }
        });
    }

    public static void main(String args[]) {
        new PirateSpeak();
    }
}