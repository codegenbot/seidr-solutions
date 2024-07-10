def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if i > 0 and (digit == s[i-1] or int(digit)*2 % 10 == int(s[i])))