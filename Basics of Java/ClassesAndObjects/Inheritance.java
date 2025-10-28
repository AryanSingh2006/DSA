package ClassesAndObjects;

// Parent class (Base class)
class Animal {
  void eat() {  // method of parent class
    System.out.println("This Animal eats food");
  }
}

// Child class (inherits from Animal)
class Dog extends Animal {
  void bark() {  // method of child class
    System.out.println("The Dog barks");
  }
}

public class Inheritance {
  public static void main(String args[]) {
    Dog d1 = new Dog();  // object of child class
    d1.bark();           // calls child class method
    d1.eat();            // calls inherited parent method
  }
}