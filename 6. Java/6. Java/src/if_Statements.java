import java.util.Scanner;

public class if_Statements {

    public static void main(String[] args) {

        //If Statements - perform a block of code if its condition is true

        Scanner scanner = new Scanner(System.in);

        String name;
        int age;
        boolean isStudent;

        System.out.print("Enter your name: ");
        name = scanner.nextLine();

        System.out.print("Enter your age: ");
        age = scanner.nextInt();

        System.out.print("Are you a student(true/false): ");
        isStudent = scanner.nextBoolean();

        //Name Condition
        if(name.isEmpty()){
            System.out.println("You didn't enter your name!");
        } else {
            System.out.println("Hello, " + name);
        }

        //Age Condition
        if (age >= 65) {
            System.out.println("You are a senior.");
        } else if (age >= 18) {
            System.out.println("You're an adult.");
        } else if (age < 0) {
            System.out.println("You haven't been born yet.");
        } else if (age == 0) {
            System.out.println("You are a baby.");
        } else {
            System.out.println("You are a child.");
        }

        //Student Condition
        if(isStudent){
            System.out.println("You are a student.");
        } else {
            System.out.println("You're not a student");
        }

        //Activity 1
        int givenNumber;

        System.out.print("Enter a number: ");
        givenNumber = scanner.nextInt();

        if(givenNumber > 0){
            System.out.println("The number is positive.");
        } else if(givenNumber < 0){
            System.out.println("The number is negative.");
        } else{
            System.out.println("The number is zero.");
        }

        //Activity 2
        int yourNumber;

        System.out.print("Enter a number: ");
        yourNumber = scanner.nextInt();

        if (yourNumber < 0 && yourNumber % 2 == 0) {
            System.out.println(yourNumber + " is even. (This is a negative number.)");
        } else if (yourNumber < 0 && yourNumber % 2 != 0) {
            System.out.println(yourNumber + " is odd. (This is a negative number.)");
        } else if (yourNumber % 2 == 0) {
            System.out.println(yourNumber + " is even.");
        } else {
            System.out.println(yourNumber + " is odd.");
        }

        scanner.close();
    }
}