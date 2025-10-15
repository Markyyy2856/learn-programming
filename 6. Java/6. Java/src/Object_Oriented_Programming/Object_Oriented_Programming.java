package Object_Oriented_Programming;

import java.util.Random;
import java.util.Scanner;

public class Object_Oriented_Programming {

    static void main(String[] args) {

        //Object - An entity that holds data (attributes)
        //         and can perform actions (methods)
        //         It is a reference data type

        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        Car car1 = new Car();

        System.out.println(car1.make);
        System.out.println(car1.model);
        System.out.println(car1.year);
        System.out.println(car1.price);

        System.out.println();

        System.out.println(car1.isRunning);
        car1.start();
        System.out.println(car1.isRunning);
        car1.stop();

        System.out.println();

        car1.drive();
        car1.brake();

        System.out.println();

        Car car2 = new Car();

        //DIFFERENT CARS but have the same attributes and methods
        System.out.println(car1.make + " " + car1.model);
        System.out.println(car2.make + " " + car2.model);

    }
}
