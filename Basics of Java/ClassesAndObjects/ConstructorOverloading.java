package ClassesAndObjects;

class Student {
  String name;
  int age;
  String course;

  Student(String name) {
    this.name = name;
  }

  Student(String name, int age) {
    this.name = name;
    this.age = age;
  }

  Student(String name, int age, String course) {
    this.name = name;
    this.age = age;
    this.course = course;
  }

  void display() {
    System.out.println("Name: " + name);
    System.out.println("Age: " + age);
    System.out.println("Course: " + course);
    System.out.println("----------------------------------");
  }
}

public class ConstructorOverloading {
  public static void main (String args[]) {
    Student s1 = new Student("Aryan");
    s1.display();

    Student s2 = new Student("Sumedh", 20);
    s2.display();

    Student s3 = new Student("Mandar", 20, "IT");
    s3.display();
  }
}
