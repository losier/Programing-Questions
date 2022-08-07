str1 = str(input("Enter a string: "))
str2 = str(input("Enter a string: "))

if str1.__eq__(str2):
    print("Both strings are same")
else:
    print("Both strings are not same")

if str1.lower() == str2.lower():
    print("Both strings are same case wise")
else:
    print("Both strings are not same case wise")
