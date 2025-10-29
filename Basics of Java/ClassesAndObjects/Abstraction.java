package ClassesAndObjects;

// Abstract class
abstract class Animal {
  // Abstract method (no body)
  abstract void sound();

  // Non-abstract method
  void sleep() {
    System.out.println("Animal is sleeping...");
  }
}

// Subclass 1
class Dog extends Animal {
  void sound() {
    System.out.println("Dog barks");
  }
}

// Subclass 2
class Cat extends Animal {
  void sound() {
    System.out.println("Cat meows");
  }
}

public class Abstraction {
  public static void main(String[] args) {
    Animal a; // reference of abstract class

    a = new Dog();
    a.sound(); // Dog barks
    a.sleep(); // Animal is sleeping...

    a = new Cat();
    a.sound(); // Cat meows
  }
}
