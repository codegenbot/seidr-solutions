def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if i > 0 and s[i] == s[i-1]:
            total += int(s[i-1:i+1])
    return total

print(paired_digits(input("Enter a string of digits: ")))