import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            int num;

            System.out.println("Enter a number: ");
            num = scan.nextInt();

            if (num > 0) {
                System.out.print(num + " is positive");
            } else if (num < 0) {
                System.out.print(num + " is negative");
            } else {
                System.out.print(num + " is zero");
            }
        }
    }
}
