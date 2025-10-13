import java.util.Arrays;


public class Arrays_Java {

    public static void main(String[] args) {

        //array = a collection of values of the same data type
        //        * think of it as a variable that can store more than 1 value *
        //Array = Reference type

        String[] fruits = {"apple", "orange", "banana", "coconut"};

        //fruits[0] = "pineapple";            - CHANGE an element value
        //int numOfFruits = fruits.length;    - GIVES number of elements using .length
        //Arrays.sort(fruits);                - SORT an array alphabetically
        //Arrays.fill(fruits, "pineapple");   - FILL an array with a value " "


        //System.out.println(fruits);         - Outputs a memory address
        //System.out.println(fruits[0]);      - ADD index to access specific element
        //System.out.println(numOfFruits);

        //PRINTS all array elements
        for (int i = 0; i < fruits.length; i++){
            System.out.print(fruits[i] + " ");
        }

        System.out.println("\n");

        //ENHANCED for loop
        for (String fruit : fruits){
            System.out.println(fruit);
        }

        System.out.println("\n");

    }
}
