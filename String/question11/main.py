def countFn(string):
    sets = set(string)
    return len(sets)


str1 = str(input("Enter a string: "))
print("Number of unique characters: ", countFn(str1))
