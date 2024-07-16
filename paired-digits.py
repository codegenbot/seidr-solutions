def paired_digits(s):
    total = 0
    prev_digit = ''
    for i in s:
        if i == prev_digit:
            total += int(prev_digit + i)
        prev_digit = i
    return total

print(paired_digits(input("Enter a string of digits: ")))