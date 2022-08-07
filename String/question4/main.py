def strSearch(string, word):
    if word in string:
        return "The ASCII value of '" + word + "' is " + str(ord(word))
    else:
        return "The word '" + word + "' is not found in the string"


str1 = str(input("Enter a string: "))
word = str(input("Enter a word: "))
print(strSearch(str1, word))
