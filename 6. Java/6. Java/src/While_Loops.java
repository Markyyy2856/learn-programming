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

        scanner.close();

    }
}
