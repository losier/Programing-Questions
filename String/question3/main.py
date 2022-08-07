def Uper2LowerAndLower2Uper(str):
    for i in range(len(str)):
        if str[i].isupper():
            str = str[:i] + str[i].lower() + str[i+1:]
        elif str[i].islower():
            str = str[:i] + str[i].upper() + str[i+1:]
    return str


str1 = str(input("Enter a string: "))
print("After conversion: ", Uper2LowerAndLower2Uper(str1))
