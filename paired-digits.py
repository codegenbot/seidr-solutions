def paired_digits(s):
    total = 0
    prev_digit = s[0]
    for i in range(1, len(s)):
        if s[i] == prev_digit:
            continue
        else:
            total += int(prev_digit) * (i - 1)
        prev_digit = s[i]
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))