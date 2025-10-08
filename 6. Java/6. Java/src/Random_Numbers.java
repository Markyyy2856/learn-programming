import java.util.Random; //Random - class

public class Random_Numbers {

    public static void main(String[] args) {

        Random random = new Random();

        int number;

        //To set some bounds, enter first number(inclusive), and last number(exclusive)
        //Gives you a number either from 1-5 but never 6
        number = random.nextInt(1, 6);

        System.out.println(number);

        //Example: Rolling a die
        int num1, num2, num3;

        num1 = random.nextInt(1, 7);
        num2 = random.nextInt(1, 7);
        num3 = random.nextInt(1, 7);

        System.out.println(num1);
        System.out.println(num2);
        System.out.println(num3);

        //Generating a random double
        double value;

        value = random.nextDouble();

        System.out.println(value);

        //Generating random boolean
        boolean isHeads;

        isHeads = random.nextBoolean();

        if (isHeads){
            System.out.println("Heads");
        } else {
            System.out.println("Tails");
        }
    }
}
