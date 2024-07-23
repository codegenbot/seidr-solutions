def paired_digits(s):
    while s and s[0] == '0':
        s = s.lstrip('0')
    return sum(int(digit) for i, digit in enumerate(s) if (digit == '0' or digit == str(int(s[i+1]))) and (i+1 < len(s)))