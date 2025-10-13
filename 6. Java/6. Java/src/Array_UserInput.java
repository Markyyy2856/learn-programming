import java.util.Scanner;

public class Array_UserInput {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        /*
        String[] foods = new String[4];      //CREATING an empty array

        foods[0] = "cake";
        foods[1] =  "chicken";
        foods[2] = "spaghetti";
        foods[3] = "hamburger";

        //For every food in our foods, print each food
        for (String food : foods){
            System.out.println(food);
        }
        */

        //String[] foods = new String[3];

        String[] foods;
        int size;

        System.out.print("How many foods would you like?: ");
        size = scanner.nextInt();
        scanner.nextLine(); //Line buffer

        foods = new String[size];

        for (int i = 0; i < foods.length; i++){
            System.out.print("Enter a food: ");
            foods[i] = scanner.nextLine();
        }

        for (String food : foods){
            System.out.println(food);
        }

        scanner.close();
    }
}
