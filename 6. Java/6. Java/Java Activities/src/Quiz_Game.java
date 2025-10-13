import java.util.Scanner;

public class Quiz_Game {

    static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        //JAVA QUIZ GAME

        //QUESTION ARRAY
        String[] questions = {"What is the chemical symbol for gold?",
                              "In which country would you find the ancient city of Petra?",
                              "What is the largest planet in our solar system?",
                              "Who is credited with inventing the telephone?",
                              "What was the first programing language?"};

        //OPTIONS ARRAY
        String[][] options = {{"A.Gd", "B.Au", "C.Ag", "D.Fe"},
                              {"A.Jordan", "B.Greece", "C.Egypt", "D.Turkey"},
                              {"A.Jupiter", "B.Mars", "C.Saturn", "D.Neptune"},
                              {"A.Alexander Graham Bell", "B.Thomas Edison", "C.Guglielmo Marconi", "D.Nikola Tesla"},
                              {"A.COBOL", "B.C", "C.Fortran", "D.Assembly"}};

        //DECLARE VARIABLES
        char[] answers = {'B', 'A', 'A', 'A', 'C'};
        int score = 0;
        char guess;

        //WELCOME MESSAGE
        System.out.println("*******************************");
        System.out.println("Welcome to the Java Quiz Game!");
        System.out.println("*******************************");

        // QUESTION LOOP
        for (int i = 0; i < questions.length; i++){
            System.out.println(questions[i]);

            //OPTIONS
            for (String option : options[i]){
                System.out.println(option);
            }

            //GET GUESS FROM USER
            System.out.print("Enter your guess: ");
            guess = scanner.next().toUpperCase().charAt(0);

            // CHECK GUESS
            System.out.println("********");
            if (guess == answers[i]){
                System.out.println("CORRECT!");
                System.out.println("********");
                score++;
            }
            else {
                System.out.println("WRONG!");
                System.out.println("********");
            }

        }

        //DISPLAY FINAL SCORE
        System.out.println("Your final score is: " + score + " out of " + questions.length);

        scanner.close();
    }
}
