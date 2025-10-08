import java.util.Scanner;

public class Area_of_Rectangle {
    public static void main(String[] args) {

        //Activity 1: Calculate the area of a rectangle

        double width;
        double height;
        double area;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter width: ");
        width = scanner.nextDouble();

        System.out.print("Enter height: ");
        height = scanner.nextDouble();

        area = width * height;

        System.out.print("The area is: " + area + "cm²");

        scanner.close();
    }
}
