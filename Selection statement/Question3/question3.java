import java.util.Scanner;

public class question3 {
    static void StudentDiscount(int n) {
        float discount;

        if (n <= 500) {
            discount = (5 * n) / 100;
            System.out.println("Your discount amount is: " + discount);
        } else {
            discount = (10 * n) / 100;
            System.out.println("Your discount amount is: " + discount);
        }
    }

    static void NonStudentDiscount(int n) {
        float discount;

        if (n <= 500) {
            discount = (2 * n) / 100;
            System.out.println("Your discount amount is: " + discount);
        } else {
            discount = (8 * n) / 100;
            System.out.println("Your discount amount is: " + discount);
        }
    }

    public static void main(String[] args) {

        try (Scanner scan = new Scanner(System.in)) {
            char response;

            System.out.println("Are you a student? (y/n)");
            response = scan.next().charAt(0);

            if (response == 'Y' || response == 'y') {
                System.out.print("Enter your bill amount: ");
                int bill = scan.nextInt();
                StudentDiscount(bill);
            } else if (response == 'N' || response == 'n') {
                System.out.print("Enter your bill amount: ");
                int bill = scan.nextInt();
                NonStudentDiscount(bill);
            } else {
                System.out.println("Invalid input");
            }
        }
    }
}
