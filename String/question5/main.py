def Elemination(string):
    vowels = ['a', 'e', 'i', 'o', 'u']
    for i in vowels:
        if i in string:
            string = string.replace(i, '')
    return string


str1 = str(input("Enter a string: "))
print("After eleminating all the vouels, the string is: " + Elemination(str1))
