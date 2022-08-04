import java.util.Scanner;

public class question2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int num1, num2, sum, sub, mul, div, choice;

        System.out.println("Enter the first number: ");
        num1 = scan.nextInt();
        System.out.println("Enter the second number: ");
        num2 = scan.nextInt();

        System.out.println("\nChoose an option: ");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        System.out.println("5. Exit");
        choice = scan.nextInt();

        switch (choice) {
            case 1:
                sum = num1 + num2;
                System.out.println("The sum of " + num1 + " and " + num2 + " is " + sum);
                break;
            case 2:
                sub = num1 - num2;
                System.out.println("The subtraction of " + num1 + " and " + num2 + " is " + sub);
                break;
            case 3:
                mul = num1 * num2;
                System.out.println("The multiplication of " + num1 + " and " + num2 + " is " + mul);
                break;
            case 4:
                div = num1 / num2;
                System.out.println("The division of " + num1 + " and " + num2 + " is " + div);
                break;
            case 5:
                System.out.println("Exiting...");
                break;
            default:
                System.out.println("Invalid choice");
                break;
        }
    }
}
