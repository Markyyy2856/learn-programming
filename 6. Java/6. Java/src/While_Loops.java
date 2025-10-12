import java.util.Scanner;

public class While_Loops {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        //While loops - repeat some code forever
        //              while some condition remains true

        String name = "";

        while (name.isEmpty()){
            System.out.print("Enter your name: ");
            name = scanner.nextLine();
        }

        System.out.println("Hello " + name);

        //Infinite Loop Game

        String secretLetter = "";

        while (!secretLetter.equals("Q")){
            System.out.println("\nYou are stuck inside a loop.");
            System.out.print("Enter Q to escape: ");
            secretLetter = scanner.next().toUpperCase();
        }

        System.out.println("You have escaped the infinite loop game.");


        //Checking your age
        int age = 10;

        System.out.print("\nEnter your age: ");
        age = scanner.nextInt();

        while (age < 0){
            System.out.println("Your age can't be negative.");
            System.out.print("Enter your age: ");
            age = scanner.nextInt();
        }

        System.out.println("You are " + age + " years old.");

        //do-while - do condition executes first before checking the condition of while loop
        int yourAge = 10;

        do{
            System.out.println("\nYour age can't be negative.");
            System.out.print("Enter your age: ");
            yourAge = scanner.nextInt();
        }
        while (yourAge < 0);

        System.out.println("You are " + yourAge + " years old.");

        //Another example
        int number = 0;

        do{
            System.out.print("\nEnter a number between 1-10: ");
            number = scanner.nextInt();
        }
        while (number < 0 || number > 10);

        System.out.println("You picked " + number);

        scanner.close();

    }
}
