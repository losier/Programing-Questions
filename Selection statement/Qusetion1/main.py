def EvenOrOdd(n):
    if n % 2 == 0:
        print(f"{n} is Even.")
    else:
        print(f"{n} is Odd.")

num = int(input("Enter a number: "))
EvenOrOdd(num)