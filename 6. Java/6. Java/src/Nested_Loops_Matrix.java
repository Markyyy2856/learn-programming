import java.util.Scanner;

public class Nested_Loops_Matrix {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int rows;
        int columns;
        char symbol;

        System.out.print("Enter number of rows: ");
        rows = scanner.nextInt();

        System.out.print("Enter number of columns: ");
        columns = scanner.nextInt();

        System.out.print("Enter a symbol: ");
        symbol = scanner.next().charAt(0); //To give a char instead of String

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                System.out.print(symbol);
            }
            System.out.println();
        }

        scanner.close();
    }
}
