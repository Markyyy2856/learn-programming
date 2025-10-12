import java.util.Scanner;

public class Break_Continue {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        //break = break out of a loop (STOP)
        //continue = skip current iteration of a loop (SKIP)

        for (int i = 0; i < 10; i++){

            if (i == 5){
                //Outputs 0 1 2 3 4 then breaks/stops the loop
                //break;

                //Outputs 0 1 2 3 4 6 7 8 9 and skips 5 only
                //continue;
            }

            System.out.print(i + " ");
        }

        scanner.close();
    }
}
