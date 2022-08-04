def grade(n):
    if n > 70:
        return "A"
    elif n > 60 and n <= 70:
        return "B+"
    elif n > 45 and n <= 60:
        return "B"
    elif n > 35 and n <= 45:
        return "C"
    elif n > 35:
        return "Fail"


percent = int(input("Enter your percentage: "))
print("Grade" + grade(percent))
