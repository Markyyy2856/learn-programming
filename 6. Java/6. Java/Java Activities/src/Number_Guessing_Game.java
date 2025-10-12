import java.util.Scanner;
import java.util.Random;

public class Number_Guessing_Game {

    public static void main(String[] args) {

        //WITH NUMBER OF ATTEMPTS

        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        int guess = 0;
        int attempts = 3;
        int randomNumber = random.nextInt(1,11);

        System.out.println("Number Guessing Game");
        System.out.println("Guess a number between 1-10");

        do {
            System.out.print("Enter a guess: ");
            guess = scanner.nextInt();
            attempts -= 1;

            if (guess < randomNumber && attempts != 0){
                System.out.println("TOO LOW! Try again.");
                System.out.println("# of attempts: " + attempts);

            }
            else if (guess > randomNumber && attempts != 0) {
                System.out.println("TOO HIGH! Try again.");
                System.out.println("# of attempts: " + attempts);

            }
            else if (guess == randomNumber && attempts != 0){
                System.out.println("CORRECT! The number is " + randomNumber);
            }
            else {
                System.out.println("You have run out of attempts.");
                System.out.println("\nThe correct answer is " + randomNumber);
            }

        }
        while (guess != randomNumber && attempts != 0);


        scanner.close();
    }
}
