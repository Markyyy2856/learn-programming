import java.util.Scanner;

public class Shopping_Cart_Program {

    public static void main(String[] args) {

        //Shopping Cart Program
        //item, price, quantity, currency, total

        Scanner scanner = new Scanner(System.in);

        String item;
        double price;
        int quantity;
        char currency = '₱';
        double total;

        System.out.println(
                """
                   MENU:
                   1. Burger
                   2. Coke
                   3. Fries"""
        );

        System.out.print("\nWhat item would you like to buy?: ");
        item = scanner.nextLine();

        System.out.print("How much does it cost?: ");
        price = scanner.nextDouble();

        System.out.print("How many would you like?: ");
        quantity = scanner.nextInt();

        System.out.println("\n---------------------");
        System.out.println("Here's what you have ordered: " +
                "\n1. Item: " + item +
                "\n2. Price: " + currency + price +
                "\n3. Quantity " + quantity
                );

        total = price * quantity;
        System.out.print("Your total is: " + currency + total);

        scanner.close();
    }
}
