import java.sql.SQLOutput;

public class Ternary_Operator {

    public static void main(String[] args) {

        //Ternary operator (?) - return 1 of 2 values if a condition is true

        //Variable = (condition) ? ifTrue : ifFalse;

        int score = 55;

        /*
        Using if-else statement

        if(score >= 60){
            System.out.println("PASS");
        }
        else{
            System.out.println("FAILED");
        }
        */

        //Using Ternary operator
        String passOrFail = (score >= 60) ? "PASS" : "FAIL";

        System.out.println(passOrFail);

        //Check if even or odd
        int number = 4;
        String evenOrOdd = (number % 2 == 0) ? "EVEN" : "ODD";

        System.out.println(evenOrOdd);

        //Check if time a.m or p.m.
        int hours = 13;
        String timeOfDay = (hours < 12) ? "AM" : "PM";

        System.out.println(timeOfDay);

        //Check salary tax rate
        int income = 60000;
        double taxRate = (income >= 40000) ? 0.25 : 0.15;

        System.out.println(taxRate);
    }
}
