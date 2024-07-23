def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if i + 1 < len(s) and i > 0 and s[i] == s[i-1])