def paired_digits(s):
    total = 0
    prev_digit = s[0]
    for i in range(1, len(s)):
        current_digit = s[i]
        if current_digit == prev_digit:
            total += int(current_digit)
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))