import java.util.Scanner;

public class Weight_Converter {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        //WEIGHT CONVERSION PROGRAM

        //Declare Variables
        double weight;
        double newWeight;
        int choice;

        //Welcome Message
        System.out.println("Weight Conversion Program");
        System.out.println("1: Convert lbs to kgs");
        System.out.println("2: Convert kgs to lbs");

        //Prompt for user choice
        System.out.print("Choose an option: ");
        choice = scanner.nextInt();

        //option 1 convert lbs to kgs
        if(choice == 1){
            System.out.print("Enter weight in lbs: ");
            weight = scanner.nextDouble();

            newWeight = weight * 0.453592;
            System.out.println("The new weight in kgs is: " + newWeight);
            System.out.printf("The new weight in kgs is: %.2f" , newWeight);
        }

        //Option 2 convert kgs to lbs
        else if(choice == 2) {
            System.out.print("Enter weight in kgs: ");
            weight = scanner.nextDouble();

            newWeight = weight * 2.20462;
            System.out.println("The new weight in lbs is: " + newWeight);
            System.out.printf("The new weight in lbs is: %.2f", newWeight);
        }

        //else print not a valid choice
        else {
            System.out.println("Invalid choice");
        }

        scanner.close();
    }
}
