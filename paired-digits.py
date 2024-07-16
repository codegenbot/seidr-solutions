def paired_digits(s):
    total = 0
    count = 1
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            count += 1
        else:
            total += int(s[i-1]) * count
            count = 1
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))