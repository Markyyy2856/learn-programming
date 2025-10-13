import java.util.Arrays;
import java.util.Scanner;

public class Array_Search {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int[] numbers = {1, 3, 4, 5, 6, 8};
        String[] fruits = {"apple", "orange", "banana"};
        //int target = 2;
        boolean isFound = false;
        String target;

        System.out.print("Enter a fruit to search for: ");
        target = scanner.nextLine();

        /*
        for (int i = 0; i < numbers.length; i++){
            if (target == numbers[i]){
                System.out.println("Element found at index " + i);
                isFound = true;
                break;
            }
        }
        */

        for (int i = 0; i < fruits.length; i++){
            if (fruits[i].equals(target)){
                System.out.println("Element found at index " + i);
                isFound = true;
                break;
            }
        }


        if (!isFound){
            System.out.println("Element not found in the array");
        }

        scanner.close();

    }
}
