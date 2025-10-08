import java.util.Scanner;

public class Circumference {

    public static void main(String[] args) {

        //Circumference = 2 * Math.PI * radius
        //area = Math.PI * Math.pow(radius, 2)
        //volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 3)

        Scanner scanner = new Scanner(System.in);

        double radius;
        double circumference;
        double area;
        double volume;

        System.out.print("Enter the radius: ");
        radius = scanner.nextDouble();

        circumference = 2 * Math.PI * radius;
        area = Math.PI * Math.pow(radius, 2);
        volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 2);

        System.out.println("The circumference is: " + circumference + "cm");
        System.out.println("The area is: " + area + "cm²");
        System.out.println("The volume is: " + volume + "cm³");

        scanner.close();
    }
}
