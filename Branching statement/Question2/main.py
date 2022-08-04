num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

sum = num1 + num2
sub = num1 - num2
mul = num1 * num2
div = num1 / num2


def options(argument):
    if argument == 1:
        print(f"Sum of {num1} and {num2}:", sum)
    elif argument == 2:
        print(f"Subtraction of {num2} from {num1}:", sub)
    elif argument == 3:
        print(f"Multiplication of {num1} and {num2}:", mul)
    elif argument == 4:
        print(f"Division of {num1} and {num2}", div)
    elif argument == 5:
        print("Thank you for using the calculator")
        print("Exiting...")
        return
    else:
        print("Invalid input")
        return


print("Choose an option: \n")
print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")
print("5. Exit")
choice = int(input())
options(choice)
