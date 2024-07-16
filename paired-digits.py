def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            total += int(s[i]) * 2
    elif i == len(s) - 2:
        total += int(s[-1])
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))