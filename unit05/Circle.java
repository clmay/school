import java.lang.Math;

class Circle {
  private double radius;

  public Circle() {
    radius = 0;
  } // end constructor

  public void setRadius(double radius) {
    this.radius = radius;
  } // end setter

  public double getRadius() {
    return this.radius;
  } // end getter

  public double getArea() {
    return Math.PI * Math.pow(this.radius, 2);
  }

} // end class Circle
