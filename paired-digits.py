```
def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if i == 0:
            if s[0] * 2 in s[1:]:
                total += int(s[0])
        elif i == len(s) - 1:
            if s[-1] * 2 in s[:-1]:
                total += int(s[-1])
        else:
            if s[i-1] == s[i]:
                total += int(s[i])
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))