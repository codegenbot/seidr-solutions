def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if (i == len(s) - 1 or digit == s[i+1]) and int(digit))