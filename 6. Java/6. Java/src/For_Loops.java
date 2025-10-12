import java.util.Scanner;

public class For_Loops {

    public static void main(String[] args) {

        //for loops - execute some code a CERTAIN amount of times

        Scanner scanner = new Scanner(System.in);

        //Basic for loop
        for (int i = 0; i <= 10 ; i++){
            System.out.println(i + " MISSISSIPPI");
        }

        //Example 1
        System.out.print("\nEnter how many times you want to loop: ");
        int max = scanner.nextInt();

        for (int i = 0; i < max; i++){
            System.out.println(i);
        }

        scanner.close();

    }
}
