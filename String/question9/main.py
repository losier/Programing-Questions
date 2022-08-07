def alternateTransformation(sting):
    res = ""
    for i in range(len(sting)):
        if i % 2 == 0:
            res += sting[i].upper()
        else:
            res += sting[i].lower()
    return res


string1 = str(input("Enter a string: "))
print(alternateTransformation(string1))
