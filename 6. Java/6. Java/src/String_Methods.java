import java.util.Scanner;

public class String_Methods {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String name = "Mark Angelo";

        //length - prints number of strings
        int length = name.length();

        //charAt(index) - prints letter at specific index assigned
        char letter = name.charAt(0);

        //indexOf - prints index of letter instead of index
        int index = name.indexOf("r");
        int lastIndex = name.lastIndexOf("o");

        //name = name.toUpperCase(); Makes the letters uppercase
        //name = name.toLowerCase(); Makes the letters lowercase
        //name = name.trim(); Trims/removes white spaces
        //name = name.replace("o", "a"); Replaces old letter to newly assigned

        /*
        **.isEmpty(); Returns a boolean (true/false) Used in if statements
        if (name.isEmpty()){
            System.out.println("Your name is empty.");
        }
        else{
            System.out.println("Hello " + name);
        }

        **.contains("a"); Same with isEmpty()
        if (name.contains("a")){
            System.out.println("Your name contains an a");
        }
        else{
            System.out.println("Your name DOESN'T contain any a");
        }

        **.equals(); Same with others
        **.equalsIgnoreCase(); To ignore case sensitivity
        if(name.equals("password")){
            System.out.println("Your name can't be password");
        }
        else{
            System.out.println("Hello " + name);
        }
        */


        System.out.println(length);
        System.out.println(letter);
        System.out.println(index);
        System.out.println(lastIndex);

        scanner.close();

    }
}
