import java.util.Scanner;

public class Nested_If {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        boolean isStudent = true;
        boolean isSenior = true;
        double price = 9.99;

        if(isStudent){
            if (isSenior){
                System.out.println("You get a senior discount of 20%");
                System.out.println("You get a student discount of 10%");
                price *= 0.7;
            }
            else {
                System.out.println("You get a student discount of 10%");
                price *= 0.9;
            }
        }
        else{
            if (isSenior){
                System.out.println("You get a senior discount of 20%");
                price *= 0.8;
            }
            else{
                price *= 1;
            }
        }

        System.out.printf("The price of the ticket is: %.2f\n" , price);

        //Example 1: Temperature Checker
        double temp;

        System.out.print("\nEnter Temperature in Celsius: ");
        temp = scanner.nextDouble();

        if(temp >= 0){
            if(temp > 30){
                System.out.println("It's hot outside");
            }
            else{
                System.out.println("The weather is normal");
            }
        }
        else{
            System.out.println("It's freezing!");
        }

        //Example 2: Constructors.Student Scholarship Eligibility
        int grade;
        double income;

        System.out.print("Enter your average grade: ");
        grade = scanner.nextInt();

        System.out.print("Enter your family income: ");
        income = scanner.nextDouble();

        if (grade >= 85){
            if (income <= 20000){
                System.out.println("You are eligible for a full scholarship.");
            }
            else{
                System.out.println("You are eligible for a partial scholarship.");
            }
        }
        else{
            System.out.println("You are not eligible for scholarship.");
        }

        //Example 3: Loan Approval System
        int age;
        double yourIncome;
        int creditScore;

        System.out.print("Enter your age: ");
        age = scanner.nextInt();

        System.out.print("Enter your income: ");
        yourIncome = scanner.nextDouble();

        System.out.print("Enter your credit score: ");
        creditScore = scanner.nextInt();

        if (age >= 21){
            if (yourIncome >= 30000){
                if (creditScore >= 700){
                    System.out.println("Loan Approved!");
                }
                else {
                    System.out.println("Loan Denied: Low credit score.");
                }
            }
            else {
                System.out.println("Loan Denied: Income too low.");
            }
        }
        else{
            System.out.println("Loan Denied: Must be at least 21 years old.");
        }

        scanner.close();
    }
}
