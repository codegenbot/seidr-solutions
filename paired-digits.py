def paired_digits(s):
    total = 0
    for i, digit in enumerate(s):
        if i + 1 < len(s) and digit == s[i+1]:
            total += int(digit)
    return total