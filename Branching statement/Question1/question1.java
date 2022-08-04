import java.util.Scanner;

public class question1 {

    static void SquareAndCude() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a number: ");
        float number = input.nextFloat();
        System.out.println("Square of " + number + " is " + (number * number));
        System.out.println("Cube of " + number + " is " + (number * number * number));
    }

    static void Leap() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a year: ");
        int year = input.nextInt();
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    System.out.println(year + " is a leap year");
                } else {
                    System.out.println(year + " is not a leap year");
                }
            } else {
                System.out.println(year + " is a leap year");
            }
        } else {
            System.out.println(year + " is not a leap year");
        }
    }

    public static void main(String[] args) {
        int choice;

        System.out.println("Choose an option: \n");
        System.out.println("1. Square and cube of a number\n");
        System.out.println("2. Leap year\n");
        System.out.println("3. Exit\n");
        Scanner input = new Scanner(System.in);
        choice = input.nextInt();
        if (choice == 1) {
            SquareAndCude();
        } else if (choice == 2) {
            Leap();
        } else if (choice == 3) {
            System.out.println("Exiting...");
            System.exit(0);
        } else {
            System.out.println("Invalid choice");
        }
    }
}