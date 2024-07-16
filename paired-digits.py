def paired_digits(s):
    total = 0
    count = 1
    prev_digit = s[0]
    for i in range(1, len(s)):
        if s[i] == prev_digit:
            count += 1
        else:
            total += int(prev_digit) * count
            count = 1
        prev_digit = s[i]
    total += int(prev_digit) * count
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))