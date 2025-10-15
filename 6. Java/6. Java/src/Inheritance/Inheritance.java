package Inheritance;

public class Inheritance {

    public static void main(String[] args) {

        //Inheritance.Inheritance - Once class inherits the attributes and methods
        //              from another class.
        //              Child <- Parent <- Grandparents

        Dog dog = new Dog();
        Cat cat = new Cat();
        Plant plant = new Plant();

        System.out.println("Inheritance.Dog");
        System.out.println(dog.isAlive);
        dog.eat();
        System.out.println(dog.lives);
        dog.speak();

        System.out.println("\nInheritance.Cat");
        System.out.println(cat.isAlive);
        cat.eat();
        System.out.println(cat.lives);
        cat.speak();

        System.out.println("\nInheritance.Plant");
        System.out.println(plant.isAlive);
        plant.photosynthesize();

    }
}
