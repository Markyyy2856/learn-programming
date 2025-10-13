

public class Variable_Arguments {

    public static void main(String[] args) {

        //varargs - allows a method to accept a varying number
        //          of arguments making the method more flexible,
        //          no need for overload methods
        //          Java will pack the arguments into an array
        //          ... (ellipsis)

        System.out.println(add(1, 2, 3, 4));

        System.out.println(average(4, 5, 6));

    }
    //varargs method for adding numbers
    static int add(int... numbers){

        int sum = 0;

        for(int number:numbers){
            sum += number;
        }
        return sum;
    }

    //varargs method for average of user input
    static double average(double... numbers){

        double sum = 0;

        if (numbers.length == 0){
            return 0;
        }

        for (double number:numbers){
            sum += number;
        }

        return sum / numbers.length;
    }
}
