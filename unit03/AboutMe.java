import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JButton;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class AboutMe extends JPanel {
  private JFrame window = new JFrame("About Me");
  private JLabel lblText = new JLabel("<html><body>Hello! My name is Chase May. Please click the buttons below to learn more about me.</body></html>");
  private JButton btnEducation = new JButton("Education");
  private JButton btnHobbies = new JButton("Hobbies");

  public AboutMe() {
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    window.setSize(400, 400);
    setLayout(null);

    lblText.setBounds(20, 20, 360, 200);
    btnEducation.setBounds(20, 200, 200, 20);
    btnHobbies.setBounds(220, 200, 100, 20);
    this.add(lblText);
    this.add(btnEducation);
    this.add(btnHobbies);

    window.add(this);
    // Make the window visible
    window.setVisible(true);

    // Listeners

    btnEducation.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        lblText.setText("I am currently a student of computer science at Weber State University. In the past, I have studied linguistics and Native American languages in Oregon.");
      }
    });

  }

  public static void main(String[] args) {
    new AboutMe();
  }
}
