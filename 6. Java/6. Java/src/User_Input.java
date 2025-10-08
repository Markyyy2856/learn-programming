import java.util.Scanner; //Scanner - is a class
public class User_Input {

    public static void main(String[] args) {

        //Scanner - class
        //scanner - name of the object, reads user input
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        //.nextLine() - reads string of characters including spaces
        //.next() - only reads the first word
        String name = scanner.nextLine();

        System.out.print("Enter your age: ");
        //.nextInt - reads integers/whole numbers
        int age = scanner.nextInt();

        System.out.print("Enter your GPA: ");
        //.nextDouble - reads double/decimal numbers
        double gpa = scanner.nextDouble();

        System.out.print("Are you a student(true/false): ");
        boolean isStudent = scanner.nextBoolean();

        System.out.println("\n-----------");
        System.out.println("Hello " + name);
        System.out.println("You are " + age + " years old.");
        System.out.println("Your GPA is: " + gpa);
        if(isStudent){
            System.out.println("You are enrolled as a student.");
        } else {
            System.out.println("You are not enrolled.");
        }

        System.out.println("\n-----------");
        //Addressing the input buffer using scanner.nextLine()
        System.out.print("How many course you are currently enrolled: ");
        int course = scanner.nextInt();
        scanner.nextLine();

        System.out.print("What is your favorite course: ");
        String favCourse = scanner.nextLine();

        //Activity 1
        double num1;
        double num2;

        System.out.print("Enter first number: " );
        num1 = scanner.nextDouble();

        System.out.print("Enter second number: " );
        num2 = scanner.nextDouble();

        System.out.println("\nSum: " + (num1 + num2));
        System.out.println("Difference: " + (num1 - num2));
        System.out.println("Product: " + (num1 * num2));
        System.out.println("Quotient: " + (num1 / num2));
        System.out.println("Remainder: " + (num1 % num2));

        scanner.nextLine();

        //Activity 2
        String yourName;
        int yourAge;
        double income;

        System.out.print("\nEnter your full name: ");
        yourName = scanner.nextLine();

        System.out.print("Enter your age: ");
        yourAge = scanner.nextInt();

        System.out.print("Enter your monthly income: ");
        income = scanner.nextDouble();

        System.out.println("\nHello, " + yourName + "!");

        if(yourAge < 0 || income < 0){
            System.out.println("Invalid input: negative values are not allowed.");
        } else if(age > 18){
            System.out.println("You are an adult");
        } else if(age < 18){
            System.out.println("You are a minor");
        } else{
            System.out.println("Invalid input.");
        }

        double dailyEarn = income / 30;

        System.out.println("You earn ₱" + dailyEarn + " per day.");

        scanner.close();
    }
}