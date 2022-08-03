import java.util.Scanner;

public class question5 {

    static void grade(int score) {
        if (score > 70) {
            System.out.println("You got an A");
        } else if (score > 60 && score <= 70) {
            System.out.println("You got a B");
        } else if (score > 45 && score <= 60) {
            System.out.println("You got a B+");
        } else if (score > 35 && score <= 45) {
            System.out.println("You got a C");
        } else if (score < 35) {
            System.out.println("You are fail!");
        } else {
            System.out.println("Invalid score");
        }
    }

    public static void mian(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("Enter your score: ");
            int score = input.nextInt();
            grade(score);
        }
    }
}
