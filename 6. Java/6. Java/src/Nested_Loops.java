import java.util.Scanner;

public class Nested_Loops {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        //Nested loop - A loop inside another loop
        //              Used often with matrices or DSA

        for (int i = 1; i <= 3; i++){
            for (int j = 1; j <= 9; j++){
                System.out.print(j + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}
