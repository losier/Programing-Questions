def SquareAndCude():
    num = int(input("Enter a number to find its square and cube: "))

    square = num * num
    cude = square * num

    print("Square of", num, "is", square)
    print("Cube of", num, "is", cude)


def Leap():
    year = int(input("Enter a year to check if it is a leap year: "))

    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                print(year, "is a leap year")
            else:
                print(year, "is not a leap year")
        else:
            print(year, "is a leap year")
    else:
        print(year, "is not a leap year")


def choice():
    print("Choose an option:")
    print("1. Square and cube")
    print("2. Leap year")
    print("3. Exit")
    choice = int(input())
    if choice == 1:
        SquareAndCude()
    elif choice == 2:
        Leap()
    elif choice == 3:
        exit()
    else:
        print("Invalid choice")


choice()
