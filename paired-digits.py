def paired_digits(s):
    s = '0' * (1 + (len(s) - 1) % 2) + s.lstrip('0') or '0'
    return sum(int(digit) for i, digit in enumerate(s) if digit == str(int(s[i+1])))