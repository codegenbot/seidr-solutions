def paired_digits(s):
    total = 0
    prev_digit = None
    for i, c in enumerate(s):
        if c == prev_digit and i + 1 < len(s) and s[i+1] == c:
            total += int(c) * 2
        prev_digit = c
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))