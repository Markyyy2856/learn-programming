import java.util.Scanner;

public class Enhanced_Switches {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        //Enhanced switch - a replacement to many else if statements
        //                  (Java 14 feature)

        String day;

        System.out.print("Enter a day: ");
        day = scanner.nextLine().toUpperCase();

        switch(day){ //If day is Monday, do this ↓
            case "MONDAY" , "TUESDAY" , "WEDNESDAY" , "THURSDAY" , "FRIDAY" -> System.out.println("It is a weekday.");
            case "SATURDAY" , "SUNDAY" -> System.out.println("It is the weekend.");
            default -> System.out.println(day + " is not a day");
        }

        scanner.close();
    }
}
