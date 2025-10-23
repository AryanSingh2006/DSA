package ClassesAndObjects;

class Shape {

  // Area of circle
  void calculateArea(double radius) {
    double area = 3.14 * radius * radius;
    System.out.println("Area of Circle: " + area);
  }

  // Area of rectangle
  void calculateArea(double length, double breadth) {
    double area = length * breadth;
    System.out.println("Area of Rectangle: " + area);
  }

  // Area of triangle
  void calculateArea(float base, float height) {
    double area = 0.5 * base * height;
    System.out.println("Area of Triangle: " + area);
  }

  // Area of square
  void calculateArea(int side) {
    int area = side * side;
    System.out.println("Area of Square: " + area);
  }
}

public class MethodOverloading {
  public static void main(String[] args) {
    Shape shape = new Shape();

    shape.calculateArea(5.0);         // Circle
    shape.calculateArea(4.0, 6.0);    // Rectangle
    shape.calculateArea(3.0f, 4.0f);  // Triangle
    shape.calculateArea(4);           // Square
  }
}
