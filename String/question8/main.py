from requests import ReadTimeout


def reverse(text):
    a = text.split()
    b = a[::-1]

    print("Reverse1: " + " ".join(b))
    print("Reverse2: " + text[::-1])


str1 = str(input("Enter a string: "))
reverse(str1)
