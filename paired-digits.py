def paired_digits(s):
    s += '0'
    return sum(int(digit) for i, digit in enumerate(s) if digit == s[i+1])