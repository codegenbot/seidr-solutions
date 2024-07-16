def paired_digits(s):
    total = 0
    count = 1
    for i in range(len(s)):
        if i > 0 and s[i] == s[i-1]:
            count += 1
        else:
            total += int(s[i]) * count
            count = 1
    total += int(s[-1]) * count
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))