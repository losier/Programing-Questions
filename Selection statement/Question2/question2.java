import java.util.Scanner;

public class question2 {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            int age;

            System.out.print("Enter your age: ");
            age = scan.nextInt();

            if (age >= 18) {
                System.out.println("You are an eligible voter.");
            } else {
                System.out.println("Please come back in " + (18 - age) + " years.");
            }
        }
    }
}
