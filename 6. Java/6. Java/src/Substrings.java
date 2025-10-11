import java.util.Scanner;

public class Substrings {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        //.substring() - a method used to extract a portion of a string
        //               .substring(start, end)

        String email;
        String username;
        String domain;

        System.out.print("Enter your email: ");
        email = scanner.nextLine();



        username = email.substring(0, 8);
        domain = email.substring(8, 17);

        //Using String methods

        //Prints everything before @
        String specialChar = email.substring(0, email.indexOf("@"));

        //Prints everything starting from @ to end
        // add + 1 to remove the "@" e.g. (email.indexOf("@") + 1)
        String domain2 = email.substring(email.indexOf("@") + 1);

        System.out.println(username);
        System.out.println(domain);
        System.out.println(specialChar);
        System.out.println(domain2);

        scanner.close();
    }
}
