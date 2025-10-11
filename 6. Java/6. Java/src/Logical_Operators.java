import java.util.Scanner;

public class Logical_Operators {

    public static void main(String[] args) {

        //Logical Operators - Allows us to check more than 1 condition
        //&& - AND - both conditions must be true
        //|| - OR  - one condition must be true
        //! - NOT  - reverses value if true, becomes false, vice versa

        Scanner scanner = new Scanner(System.in);

        double temp = -10;
        boolean isSunny = false;

        if (temp <= 30 && temp >= 0 && isSunny){
            System.out.println("The weather is GOOD");
            System.out.println("It is SUNNY outside");
        }
        else if (temp <= 30 && temp >= 0 && !isSunny){
            System.out.println("The weather is GOOD");
            System.out.println("It is CLOUDY outside");
        }
        else if (temp > 30 || temp < 0) {
            System.out.println("The weather is BAD");
        }

        //New example
        //Username must be 4-12 characters
        //Username must not contain spaces or underscores

        String username;

        System.out.print("Enter your new username: ");
        username = scanner.nextLine();

        if (username.length() < 4 || username.length() > 12){
            System.out.println("Username must be between 4-12 characters.");
        }
        else if (username.contains(" ") || username.contains("_")) {
            System.out.println("Username must not contain spaces or underscores");
        }
        else {
            System.out.println("Welcome " + username);
        }

        scanner.close();

    }
}
