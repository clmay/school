import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JButton;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class AboutMe extends JPanel {

  String aboutText = "<html><body>Hello! My name is Chase May. Welcome!";
  String educationText = "<html><body>I am currently a student of computer science at Weber State University. In the past, I have studied linguistics and Native American languages in Oregon.</body></html>";
  String projectsText = "<html><body>You can view my current projects by visiting my <a href=\"https://github.com/chsm\">GitHub profile</a>. Recent projects include Pac-Man graphics, a palindrome tester, and others.</body></html>";
  String hobbiesText = "<html><body>Some of my favorite hobbies are cooking, traveling, learning new (human) languages, and learning new computer languages.</body></html>";

  private JFrame window = new JFrame("About Me");
  private JButton btnAbout = new JButton("About me");
  private JButton btnEducation = new JButton("Education");
  private JButton btnProjects = new JButton("Projects");
  private JButton btnHobbies = new JButton("Hobbies");
  private JLabel lblText = new JLabel(aboutText);

  public AboutMe() {
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    window.setSize(400, 350);
    setLayout(null);

    lblText.setBounds(30, 20, 360, 180);
    btnAbout.setBounds(30, 200, 150, 20);
    btnEducation.setBounds(220, 200, 150, 20);
    btnProjects.setBounds(30, 240, 150, 20);
    btnHobbies.setBounds(220, 240, 150, 20);
    this.add(lblText);
    this.add(btnAbout);
    this.add(btnEducation);
    this.add(btnProjects);
    this.add(btnHobbies);

    window.add(this);
    // Make the window visible
    window.setVisible(true);

    // Listeners
    btnAbout.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        lblText.setText(aboutText);
      }
    });

    btnEducation.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        lblText.setText(educationText);
      }
    });

    btnProjects.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        lblText.setText(projectsText);
      }
    });

    btnHobbies.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        lblText.setText(hobbiesText);
      }
    });
  }

  public static void main(String[] args) {
    new AboutMe();
  }
}
