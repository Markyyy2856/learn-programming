

public class Arrays_2D {

    static void main(String[] args) {

        //2D array - An array where each element is an array
        //           Useful for storing a matrix of data

        String[][] groceries = {{"Apple", "Orange", "Banana"},
                                {"Potato", "Onion", "Carrot"},
                                {"Chicken", "Pork", "Beef", "Fish"}};

        groceries[2][1] = "eggs";

        for (String[] foods : groceries){
            for (String food : foods){
                System.out.print(food + " ");
            }
            System.out.println();
        }
    }
}
