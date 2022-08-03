import java.util.Scanner;

public class question1 {
    static void EverOrOdd() {
        int n;

        try (Scanner scan = new Scanner(System.in)) {
            System.out.println("Enter a number");
            n = scan.nextInt();
        }

        if (n % 2 == 0) {
            System.out.println(n + " is Even");
        } else {
            System.out.println(n + " is Odd");
        }
    }

    public static void main(String[] args) {
        EverOrOdd();
    }
}