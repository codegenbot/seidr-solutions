def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if digit == str(int(s[i+1])) if i+1 < len(s))