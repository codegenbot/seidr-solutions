def paired_digits(s):
    total = 0
    count = 1
    for i in range(len(s)):
        if i == len(s) - 1 or s[i] != s[i+1]:
            total += int(s[i]) * count
            count = 1
        else:
            count += 1
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))