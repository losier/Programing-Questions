import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            int num1, num2, num3;

            System.out.println("Enter first numbers: ");
            num1 = scan.nextInt();

            System.out.println("Enter second numbers: ");
            num2 = scan.nextInt();

            System.out.println("Enter third numbers: ");
            num3 = scan.nextInt();

            if (num1 > num2 && num1 > num3) {
                System.out.println("Largest number is: " + num1);
            } else if (num2 > num1 && num2 > num3) {
                System.out.println("Largest number is: " + num2);
            } else {
                System.out.println("Largest number is: " + num3);
            }
        }
    }
}
