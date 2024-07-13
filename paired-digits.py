def paired_digits(s):
    total = 0
    prev_digit = s[0]
    for i in range(len(s)):
        if i > 0 and s[i] == prev_digit:
            total += int(s[i])
        prev_digit = s[i]
    return total