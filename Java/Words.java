package GuessThename;

import java.util.*;
import java.lang.StringBuilder;

public class Words {

    private String[] randwrds = { "squirrel", "music", "sandwitch", "skull", "flower", "male", "spiderman", "hulk",
            "rose", "baby", "london",
            "bee", "rat", "cat", "kitten", "chicken", "food", "girl", "boy", "family", "science", "chemistry",
            "physics", "mathematics", "giraffe", "banana", "koala", "engineer" };

    private String Select;
    private Random random = new Random();
    private char[] letters;

    public Words() {
        Select = randwrds[random.nextInt(randwrds.length)];
        letters = new char[Select.length()];
    }

    public String toString() {

        StringBuilder text = new StringBuilder();

        for (char letter : letters) {

            text.append(letter == '\u0000' ? '_' : letter);
            text.append(" ");
        }
        return text.toString();
    }

    public boolean isGuessedright() {
        for (char letter : letters) {
            if (letter == '\u0000') {
                return false;
            }

        }
        return true;

    }

    public boolean guess(char letter) {
        boolean guessright = false;
        for (int i = 0; i < Select.length(); i++) {

            if (letter == Select.charAt(i)) {
                letters[i] = letter;
                guessright = true;
            }
        }
        return guessright;
    }
}