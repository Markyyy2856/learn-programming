

public class Methods {

    public static void main(String[] args) {

        //Method - a block of reusable code that is executed when called ()
        //D.R.Y - Don't repeat yourself

        //HAPPY BIRTHDAY
        String name = "Mark";
        int age = 24;

        happyBirthday(name, age);
        happyBirthday(name, age);

        //SQUARE OF A NUMBER
        System.out.println(square(3));

        //CUBE OF A NUMBER
        System.out.println(cube(3));

        //GET FULL NAME
        String yourName = fullName("Mark", "Reyes");
        System.out.println("Hello " +  yourName);

        System.out.println();

        //CHECK AGE
        int yourAge = 18;

        if (ageCheck(yourAge)){
            System.out.println("You may signup!");
        }
        else {
            System.out.println("You must be 18+ to signup!");
        }

    }
    static void happyBirthday(String name, int age){
        System.out.println("Happy Birthday to you!");
        System.out.printf("Happy Birthday dear %s!\n" , name);
        System.out.printf("You are %d years old!\n" , age);
        System.out.println("Happy Birthday to you!\n");
    }

    static double square(double number){
        return number * number;
    }

    static double cube(double nums){
        return nums * nums * nums;
    }

    static String fullName(String firstName, String lastName){
        return firstName + " " + lastName;
    }

    static boolean ageCheck(int age){
        if (age >= 18){
            return true;
        }
        else {
            return false;
        }
    }
}
