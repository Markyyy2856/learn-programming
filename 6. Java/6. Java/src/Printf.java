
public class Printf {

    public static void main(String[] args) {

        //printf() - a method to format output

        //%[flags][width][.precision][specifier-character]

        String name = "Mark Angelo";
        char firstLetter = 'M';
        int age = 24;
        double height = 56.7;
        boolean isEmployed = true;

        //Specifier-character
        System.out.printf("Hello %s", name);
        System.out.printf("\nYour name starts with a %c", firstLetter);
        System.out.printf("\nYou are %d years old.", age);
        System.out.printf("\nYou are %f inches tall", height);
        System.out.printf("\nEmployed: %b", isEmployed);

        System.out.printf("\n%s is %d years old", name, age);

        //Precision
        double price1 = 9.99;
        double price2 = 100.15;
        double price3 = -54.01;

        System.out.printf("\n%.1f", price1); //.1 single decimal number
        System.out.printf("\n%.2f", price2); //.2 two decimal number
        System.out.printf("\n%.3f", price3); //.3 three decimal number, and so on...

        //Flags
        //+ = output a plus
        //, = comma grouping separator
        //( = negative numbers are enclosed in ()
        //space = display a minus if negative, space if positive

        double price4 = 900.99;
        double price5 = -1000.15;
        double price6 = 540.01;
        double price7 = -275.33;
        double price8 = -99.99;
        double price9 = 101.10;
        double price10 = -234.56;

        System.out.printf("\n%+.2f", price4);  //Outputs +900.99, if negative, still negative -1000.15
        System.out.printf("\n%,.2f", price5);  //Outputs -1,000.15
        System.out.printf("\n%(.2f", price6);  //
        System.out.printf("\n%(.2f", price7);  //Negatives are enclosed inside ()
        System.out.printf("\n%(.2f", price8);  //(-275.33) and (-99.99)
        System.out.printf("\n% .2f", price9);  //Outputs (space)101.10 -with space for positive
        System.out.printf("\n% .2f", price10); //Outputs -234.56 -for negatives

        //Width
        //0 = zero padding
        //number = right justified padding
        //negative number = left justified padding


    }
}
