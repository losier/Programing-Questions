num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))

if num1 > num2 and num1 > num3:
    print(f"{num1} is greatest among all three")
elif num2 > num1 and num2 > num3:
    print(f"{num2} is greatest among all three")
elif num3 > num1 and num3 > num2:
    print(f"{num3} is greatest among all three")
elif num1 == num2 and num1 > num3:
    print(f"{num1} and {num2} are greatest among all three")
elif num1 == num3 and num1 > num2:
    print(f"{num1} and {num3} are greatest among all three")
elif num2 == num3 and num2 > num1:
    print(f"{num2} and {num3} are greatest among all three")
elif num1 == num2 and num1 == num3:
    print(f"{num1}, {num2} and {num3} are equal")
else:
    print("Invalid input")
