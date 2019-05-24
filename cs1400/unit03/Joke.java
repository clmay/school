import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JButton;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class Joke extends JPanel {

  private JFrame window = new JFrame("Joke of the day");
  private JLabel lblJoke = new JLabel("What do you call a cow with no legs?");
  private JButton btnPunchline = new JButton("Show Punchline");

  // Constructor: same name as the class
  // Creates a new instance of the class
  public Joke() {

    // Exit program when window is closed
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    // Set the default window size (width, height)
    window.setSize(800, 600);

    setLayout(null);
    lblJoke.setBounds(20, 20, 760, 20);
    btnPunchline.setBounds(20, 60, 200, 20);
    this.add(lblJoke);
    this.add(btnPunchline);
    window.add(this);
    // Make the window visible
    window.setVisible(true);

    btnPunchline.addActionListener(new ActionListener() {
      boolean shown = false;
      
      public void actionPerformed(ActionEvent e) {
        if (shown == false) {
          btnPunchline.setText("Ground beef!");
          shown = true;
        } else {
          btnPunchline.setText("Show Punchline");
          shown = false;
        }
      }
    });

  }

  public static void main(String[] args) {

    // Create an instance of `Joke`
    new Joke();

  }

}
