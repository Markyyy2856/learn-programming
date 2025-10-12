import java.util.Scanner;

public class For_Loop_Countdown_Simulator {

    public static void main(String[] args) throws InterruptedException {

        Scanner scanner = new Scanner(System.in);

        System.out.print("How many seconds to countdown from?: ");
        int start = scanner.nextInt();

        for (int i = start; i > 0; i--){
            System.out.println(i);
            Thread.sleep(1000); //Sleep timer in milliseconds
        }

        System.out.println("Happy New Year!");

        scanner.close();
    }
}
