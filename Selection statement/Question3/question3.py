def studentDiscount(n):
    if n <= 500:
        discount = ((5/100) * n)
        print("Your discount amount is: ", discount)
    else:
        discount = ((10/100) * n)
        print("Your discount amount is: ", discount)


def nonStudentDiscount(n):
    if n <= 500:
        discount = ((2/100) * n)
        print("Your discount amount is: ", discount)
    else:
        discount = ((8/100) * n)
        print("Your discount amount is: ", discount)


def discount():
    a = input("Are you a student? (y/n): ")

    if a[0] == "Y" or a[0] == "y":
        n = int(input("Enter your bill amount: "))
        studentDiscount(n)
    elif a[0] == "N" or a[0] == "n":
        n = int(input("Enter your bill amount: "))
        nonStudentDiscount(n)
    else:
        print("Invalid input")


discount()
