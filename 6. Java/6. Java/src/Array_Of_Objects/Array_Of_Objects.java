package Array_Of_Objects;

public class Array_Of_Objects {

    static void main(String[] args) {

        Car[] cars = {new Car("Mustang", "Red"),
                      new Car("Ford", "Black"),
                      new Car("Ferrari", "Yellow")};

        //Change color of cars
        for (Car car : cars){
            car.color = "White";
        }

        for (Car car : cars){
            car.drive();
        }

    }
}
