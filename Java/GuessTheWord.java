package GuessThename;

import java.util.Scanner;

public class GuessTheWord {

    private boolean play = true;
    private Words ranWords = new Words();
    private Scanner scanner = new Scanner(System.in);
    private int rounds = 10;
    private char lastRound;

    public void Start() {
        do {

            displayWord();
            getInput();
            checkInput();

        } while (play);
    }

    void displayWord() {
        System.out.println(ranWords);
        System.out.println("You have " + rounds + " chances more");
    }

    void getInput() {

        System.out.println("Enter Your Guess!");
        String playerguess = scanner.nextLine();
        lastRound = playerguess.charAt(0);

    }

    void checkInput() {

        boolean isGuessedright = ranWords.guess(lastRound);

        if (isGuessedright) {
            if (ranWords.isGuessedright()) {
                System.out.println("Congrats You Got It Right!");
                System.out.println("The Word Was " + ranWords);
                play = false;
            }
        } else {
            rounds--;

            if (rounds == 0) {
                System.out.println("Game Over!");
                play = false;
            }
        }
    }

    public void end() {
        scanner.close();
    }

}
