str1 = str(input("Enter a string: "))

if str1 == str1[::-1]:
    print(f"{str1} is a palindrome")
else:
    print(f"{str1} is not a palindrome")
