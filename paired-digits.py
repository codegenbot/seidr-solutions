def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if i < len(s) - 1 and s[i] == s[i + 1]:
            total += int(s[i]) * 2
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))