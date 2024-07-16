def paired_digits(s):
    total = 0
    prev_digit = s[0]
    current_count = 1
    for i in range(1, len(s)):
        current_digit = s[i]
        if current_digit == prev_digit:
            current_count += 1
        else:
            if current_count > 0: 
                total += int(prev_digit) * current_count
            current_count = 1
        prev_digit = current_digit
    if current_count > 0:
        total += int(prev_digit) * current_count

s = input("Enter a string of digits: ")
print(paired_digits(s))