def checkBlank(string):
    count = 0

    for i in range(0, len(string)):
        if string[i] == ' ':
            count += 1

    if count == 0:
        return "The string is not blank"
    else:
        return f"Number of spaces: {count}"


str1 = str(input("Enter a string: "))
print(checkBlank(str1))
