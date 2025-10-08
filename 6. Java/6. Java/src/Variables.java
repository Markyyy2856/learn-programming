public class Variables {

    public static void main(String[] args) {

        //Variable - container

        //Primitive - simple value stored directly in memory (stack)
        // Reference - memory address(stack) that points to the (heap)

        //Primitive vs. Reference
        //-----------------------
        // int          string
        // double       array
        // char         object
        // boolean

        //Steps: Declaration and Assignment

        int age = 24;
        int year = 2025;
        double gpa = 1.25;
        char initial = 'M';
        boolean isMale = true;

        String name = "Mark Angelo";

        System.out.println(age);
        System.out.println(year);
        System.out.println("You are " + age + " years old");
        System.out.println("Your GPA is " + gpa);
        System.out.println("Your initial is " + initial);
        System.out.println(isMale);
        if(isMale == true){
            System.out.println("You are a male");
        }

        System.out.println("Hello, " + name);

        System.out.println("\n-----------------");

        //Assignment:
        String yourName = "Bro Code";
        int gta = 6;
        double pi = 3.14159;
        char gender = 'M';
        boolean isAdmin = true;

        System.out.println("Your name is " + yourName);
        System.out.println("Your GTA is " + gta);
        System.out.println("The value of pi is " + pi);
        System.out.println("Your gender is " + gender);
        if(isAdmin){
            System.out.println("Hello, admin!");
        } else {
            System.out.println("You're not the admin!");
        }

        //Activity
        int a = 8;
        int b = 3;

        System.out.println("a = " + a);
        System.out.println("b = " + b);

        System.out.println("Sum = " + (a + b));
        System.out.println("Difference = " + (a - b));
        System.out.println("Product = " + (a * b));
        System.out.println("Quotient = " + (a / b));
    }
}
