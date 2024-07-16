```
def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if i > 0 and s[i] == s[i-1]:
            total += int(s[i-1:i+1])
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))