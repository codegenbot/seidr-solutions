def paired_digits(s):
    total = 0
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            total += int(s[i])
    if len(s) > 0 and (s[-1] == '0' or s[0] == '0'):
        total += int(s[0])
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))