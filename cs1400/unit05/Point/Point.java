public class Point {
  private int x, y;

  public Point() {
    x = 0;
    y = 0;
  }

  public Point(int x, int y) {
    this.x = x;
    this.y = y;
  }

  public setPoint(int x, int y) {
    this.x = x;
    this.y = y;
  }

  public void setX(int x) {
    this.x = x;
  }

  public void setY(int y) {
    this.y = y;
  }

  public int getX() {
    return this.x;
  }

  public int getY() {
    return this.y;
  }

  public double distanceTo(Point p) {
    double distance;
    distance = Math.sqrt(Math.pow(y - p.getY(), 2) + Math.pow (x - p.getX(), 2)  );
    return distance;
  }

  public String toString(){
    return "[" + x + ", " + y + "]";
  }

}
