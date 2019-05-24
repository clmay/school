import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;

class PacManGraphic extends JPanel {
  JFrame window = new JFrame("Pac-Man graphics");

  static final int SCALE = 4;
  static final int WIN_WIDTH = 150 * SCALE;
  static final int WIN_HEIGHT = 200 * SCALE;
  static final int SPRITE_SIZE = 10 * SCALE;

  // Ghost bottom shape
  int[] bottomXs = {0, 0, 2, 4, 4, 6, 6, 8, 10, 10};
  int[] bottomYs = {0, 6, 4, 6, 4, 4, 6, 4,  6,  0};

  int ghostEyeWidth = 3 * SPRITE_SIZE / 10;
  int ghostEyeHeight = 5 * SPRITE_SIZE / 10;
  int ghostPupilDiameter = 2 * SPRITE_SIZE / 10;

  public PacManGraphic() {
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    window.setSize(WIN_WIDTH, WIN_HEIGHT);
    window.setBackground(Color.black);
    window.add(this);
    window.setVisible(true);
  }

  public void paintComponent(Graphics g) {

    // Pac-Dots
    int pacDotDiameter = 2 * SCALE;
    g.setColor(Color.white);
    for (int row = 20; row < WIN_HEIGHT - 30; row += 30) {
      for (int col = 10; col < WIN_WIDTH; col += 30) {
        g.fillOval(col, row, pacDotDiameter, pacDotDiameter);
      }
    }

    // Ghost Home
    int ghostHomeWidth = 4 * SPRITE_SIZE;
    int ghostHomeHeight = 2 * SPRITE_SIZE;
    int ghostHomeXPos = (WIN_WIDTH / 2) - (ghostHomeWidth / 2);
    int ghostHomeYPos = (WIN_HEIGHT / 2) - (ghostHomeHeight / 2);
    g.setColor(Color.black);
    // Clear Ghost Home
    g.fillRect(ghostHomeXPos - 10, ghostHomeYPos - 10, ghostHomeWidth + 20, ghostHomeHeight + 20);
    g.setColor(Color.blue);
    // Draw outer rectangle for Ghost Home
    g.drawRect(ghostHomeXPos, ghostHomeYPos, ghostHomeWidth, ghostHomeHeight);
    // Draw inner rectangle for Ghost Home
    g.drawRect(ghostHomeXPos + 5, ghostHomeYPos + 5, ghostHomeWidth - 10, ghostHomeHeight - 10);
    g.setColor(Color.black);
    // Clear opening for ghosts
    g.fillRect(ghostHomeXPos + (ghostHomeWidth / 3), ghostHomeYPos, ghostHomeWidth / 3, 5);
    // Draw opening threshold
    g.setColor(Color.pink);
    g.fillRect(ghostHomeXPos + (ghostHomeWidth / 3) + 1, ghostHomeYPos, ghostHomeWidth / 3, 4);

    // Pac-Man
    int pacManXPos = (WIN_WIDTH / 2) - (SPRITE_SIZE / 2);
    int pacManYPos = (2 * WIN_HEIGHT / 3) - (SPRITE_SIZE / 2);
    // Clear Pac-Man's space
    g.setColor(Color.black);
    g.fillOval(pacManXPos, pacManYPos, SPRITE_SIZE, SPRITE_SIZE);
    // Draw Pac-Man
    g.setColor(Color.yellow);
    g.fillArc(pacManXPos, pacManYPos, SPRITE_SIZE, SPRITE_SIZE, 30, 300);

    // Setup for the ghosts
    int[] ghostXs = new int[10];
    int[] ghostYs = new int[10];
    for (int i = 0; i < ghostXs.length; i++) {
      ghostXs[i] = bottomXs[i] * SCALE;
      ghostYs[i] = bottomYs[i] * SCALE;
    }

    // Inky
    int inkyXPos = (WIN_WIDTH / 2) - (3 * SPRITE_SIZE / 2) - 5;
    int inkyYPos = (WIN_HEIGHT / 2) - (SPRITE_SIZE / 2);
    g.setColor(Color.cyan);
    // Inky's top
    g.fillArc(inkyXPos, inkyYPos, SPRITE_SIZE, SPRITE_SIZE, 0, 180);
    // Inky's bottom
    int[] inkyXs = new int[ghostXs.length];
    int[] inkyYs = new int[ghostYs.length];
    for (int i = 0; i < ghostXs.length; i++) {
      inkyXs[i] = ghostXs[i] + inkyXPos;
      inkyYs[i] = ghostYs[i] + (SPRITE_SIZE / 2) + inkyYPos;
    }
    g.fillPolygon(inkyXs, inkyYs, inkyXs.length);
    // Eyes
    g.setColor(Color.white);
    g.fillOval(inkyXPos + 5, inkyYPos + 3, ghostEyeWidth, ghostEyeHeight);
    g.fillOval(inkyXPos + 23, inkyYPos + 3, ghostEyeWidth, ghostEyeHeight);
    g.setColor(Color.blue);
    g.fillOval(inkyXPos + 7, inkyYPos + 4, ghostPupilDiameter, ghostPupilDiameter);
    g.fillOval(inkyXPos + 25, inkyYPos + 4, ghostPupilDiameter, ghostPupilDiameter);

    // Blinky
    int blinkyXPos = inkyXPos + SPRITE_SIZE + 5;
    int blinkyYPos = inkyYPos - (2 * SPRITE_SIZE);
    g.setColor(Color.red);
    // Blinky's top
    g.fillArc(blinkyXPos, blinkyYPos, SPRITE_SIZE, SPRITE_SIZE, 0, 180);
    // Blinky's bottom
    int[] blinkyXs = new int[ghostXs.length];
    int[] blinkyYs = new int[ghostYs.length];
    for (int i = 0; i < ghostXs.length; i++) {
      blinkyXs[i] = ghostXs[i] + blinkyXPos;
      blinkyYs[i] = ghostYs[i] + (SPRITE_SIZE / 2) + blinkyYPos;
    }
    g.fillPolygon(blinkyXs, blinkyYs, inkyXs.length);
    // Eyes
    g.setColor(Color.white);
    g.fillOval(blinkyXPos + 5, blinkyYPos + 3, ghostEyeWidth, ghostEyeHeight);
    g.fillOval(blinkyXPos + 23, blinkyYPos + 3, ghostEyeWidth, ghostEyeHeight);
    g.setColor(Color.blue);
    g.fillOval(blinkyXPos + 4, blinkyYPos + 10, ghostPupilDiameter, ghostPupilDiameter);
    g.fillOval(blinkyXPos + 22, blinkyYPos + 10, ghostPupilDiameter, ghostPupilDiameter);

    // Pinky
    int pinkyXPos = inkyXPos + SPRITE_SIZE + 5;
    int pinkyYPos = inkyYPos;
    g.setColor(Color.pink);
    // Pinky's top
    g.fillArc(pinkyXPos, pinkyYPos, SPRITE_SIZE, SPRITE_SIZE, 0, 180);
    // Pinky's bottom
    int[] pinkyXs = new int[ghostXs.length];
    int[] pinkyYs = new int[ghostYs.length];
    for (int i = 0; i < ghostXs.length; i++) {
      pinkyXs[i] = ghostXs[i] + pinkyXPos;
      pinkyYs[i] = ghostYs[i] + (SPRITE_SIZE / 2) + pinkyYPos;
    }
    g.fillPolygon(pinkyXs, pinkyYs, inkyXs.length);
    // Eyes
    g.setColor(Color.white);
    g.fillOval(pinkyXPos + 5, pinkyYPos + 3, ghostEyeWidth, ghostEyeHeight);
    g.fillOval(pinkyXPos + 23, pinkyYPos + 3, ghostEyeWidth, ghostEyeHeight);
    g.setColor(Color.blue);
    g.fillOval(pinkyXPos + 7, pinkyYPos + 15, ghostPupilDiameter, ghostPupilDiameter);
    g.fillOval(pinkyXPos + 25, pinkyYPos + 15, ghostPupilDiameter, ghostPupilDiameter);

    // Clyde
    int clydeXPos = pinkyXPos + SPRITE_SIZE + 5;
    int clydeYPos = pinkyYPos;
    g.setColor(Color.orange);
    // Clyde's top
    g.fillArc(clydeXPos, clydeYPos, SPRITE_SIZE, SPRITE_SIZE, 0, 180);
    // Clyde's bottom
    int[] clydeXs = new int[ghostXs.length];
    int[] clydeYs = new int[ghostYs.length];
    for (int i = 0; i < ghostXs.length; i++) {
      clydeXs[i] = ghostXs[i] + clydeXPos;
      clydeYs[i] = ghostYs[i] + (SPRITE_SIZE / 2) + clydeYPos;
    }
    g.fillPolygon(clydeXs, clydeYs, inkyXs.length);
    // Eyes
    g.setColor(Color.white);
    g.fillOval(clydeXPos + 5, clydeYPos + 3, ghostEyeWidth, ghostEyeHeight);
    g.fillOval(clydeXPos + 23, clydeYPos + 3, ghostEyeWidth, ghostEyeHeight);
    g.setColor(Color.blue);
    g.fillOval(clydeXPos + 7, clydeYPos + 4, ghostPupilDiameter, ghostPupilDiameter);
    g.fillOval(clydeXPos + 25, clydeYPos + 4, ghostPupilDiameter, ghostPupilDiameter);

    // Maze
    // Clear some rectangles
    g.setColor(Color.black);

    // First row
    g.fillRect(40, 50, 130, 50);
    g.fillRect(220, 50, 160, 50);
    g.fillRect(430, 50, 130, 50);

    // Second row
    g.fillRect(40, 120, 250, 50);
    g.fillRect(340, 120, 220, 50);

    // Third row
    g.fillRect(40, 200, 130, 50);
    g.fillRect(220, 200, 160, 50);
    g.fillRect(430, 200, 130, 50);

    // Fourth row
    g.fillRect(40, 270, 220, 50);
    g.fillRect(340, 270, 220, 50);

    // Sides
    g.fillRect(40, 350, 130, 100);
    g.fillRect(430, 350, 130, 100);

    // Fifth row
    g.fillRect(40, 500, 190, 50);
    g.fillRect(370, 500, 190, 50);

    // Sixth row
    g.fillRect(40, 580, 250, 50);
    g.fillRect(340, 580, 220, 50);

    // Seventh row
    g.fillRect(40, 680, 130, 50);
    g.fillRect(220, 680, 160, 50);
    g.fillRect(430, 680, 130, 50);

    // Then draw them in
    g.setColor(Color.blue);

    // First row
    g.drawRoundRect(40, 45, 130, 50, 10, 10);
    g.drawRoundRect(220, 45, 160, 50, 10, 10);
    g.drawRoundRect(430, 45, 130, 50, 10, 10);

    // Second row
    g.drawRoundRect(40, 130, 250, 25, 10, 10);
    g.drawRoundRect(340, 130, 220, 25, 10, 10);

    // Third row
    g.drawRoundRect(40, 195, 130, 50, 10, 10);
    g.drawRoundRect(220, 195, 160, 50, 10, 10);
    g.drawRoundRect(430, 195, 130, 50, 10, 10);

    // Fourth row
    g.drawRoundRect(40, 280, 220, 25, 10, 10);
    g.drawRoundRect(340, 280, 220, 25, 10, 10);

    // Sides
    g.drawRoundRect(40, 345, 130, 105, 10, 10);
    g.drawRoundRect(430, 345, 130, 105, 10, 10);

    // Fifth row
    g.drawRoundRect(40, 500, 190, 40, 10, 10);
    g.drawRoundRect(370, 500, 190, 40, 10, 10);

    // Sixth row
    g.drawRoundRect(40, 590, 250, 35, 10, 10);
    g.drawRoundRect(340, 590, 220, 35, 10, 10);

    // Seventh row
    g.drawRoundRect(40, 675, 130, 50, 10, 10);
    g.drawRoundRect(220, 675, 160, 50, 10, 10);
    g.drawRoundRect(430, 675, 130, 50, 10, 10);
  }

  public static void main(String[] args) {
    new PacManGraphic();
  }
}
