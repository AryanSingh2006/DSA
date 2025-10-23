package ClassesAndObjects; // Package name (used to group related classes together)

// Define a class named Student
class Student {
  // Properties (attributes) of the Student class
  String name;
  int age;
  String email;
  int contact;

  // Method to print student details
  void print() {
    System.out.println("Name of the student is " + name);
    System.out.println("Age of the student is " + age);
    System.out.println("This is the email of the student: " + email);
    System.out.println("This is the contact of the student: " + contact);
    System.out.println("-------------------------------------"); // separator for clarity
  }
}

// Main class (program execution starts here)
public class StudentDemo {
  public static void main(String args[]) {
    // Create objects (instances) of the Student class
    Student s1 = new Student();
    Student s2 = new Student();
    Student s3 = new Student();

    // Assign values to object s1’s attributes
    s1.name = "Aryan";
    s1.age = 19;
    s1.email = "aryan@gmail.com";
    s1.contact = 123456789;
    s1.print(); // Call print() method to display details

    // Assign values to object s2’s attributes
    s2.name = "Sumedh";
    s2.age = 19;
    s2.email = "sumedh@gmail.com";
    s2.contact = 123456789;
    s2.print();

    // Assign values to object s3’s attributes
    s3.name = "Mandar";
    s3.age = 19;
    s3.email = "mandar@gmail.com";
    s3.contact = 123456789;
    s3.print();
  }
}
