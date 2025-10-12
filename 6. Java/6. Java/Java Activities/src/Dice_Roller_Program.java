import java.util.Scanner;
import java.util.Random;

public class Dice_Roller_Program {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        //DICE ROLLER PROGRAM

        //DECLARE VARIABLES
        int numDice;
        int total = 0;

        //GET NO. OF DICE FROM USER
        System.out.print("Enter number of dice to roll: ");
        numDice = scanner.nextInt();

        //CHECK IF NO. OF DICE > 0
        if (numDice > 0){

            //ROLL ALL THE DICE
            for (int i = 0; i < numDice; i++){
                int roll = random.nextInt(1, 7);
                printDie(roll);
                System.out.println("You rolled: " + roll);
                total += roll;
            }

            //GET THE TOTAL
            System.out.println("Total: " + total);
        }
        else {
            System.out.println("Number of dice must be greater than 0");
        }

        scanner.close();
    }

    //DISPLAY
    static void printDie(int roll){
        String dice1 = """
                 -------
                |       |
                |   ●   |
                |       |
                 -------
                """;

        String dice2 = """
                 -------
                | ●     |
                |       |
                |     ● |
                 -------
                """;

        String dice3 = """
                 -------
                | ●     |
                |   ●   |
                |     ● |
                 -------
                """;

        String dice4 = """
                 -------
                | ●   ● |
                |       |
                | ●   ● |
                 -------
                """;

        String dice5 = """
                 -------
                | ●   ● |
                |   ●   |
                | ●   ● |
                 -------
                """;

        String dice6 = """
                 -------
                | ●   ● |
                | ●   ● |
                | ●   ● |
                 -------
                """;

        switch (roll){
            case 1 -> System.out.print(dice1);
            case 2 -> System.out.print(dice2);
            case 3 -> System.out.print(dice3);
            case 4 -> System.out.print(dice4);
            case 5 -> System.out.print(dice5);
            case 6 -> System.out.print(dice6);
            default -> System.out.println("Invalid roll.");
        }

    }
}
