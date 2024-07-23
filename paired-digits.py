def paired_digits(s):
    while s and s[0] == '0':
        s = s.lstrip('0')
    return sum(int(digit) for i, digit in enumerate(s) if i < len(s) - 1 and (s[i] == s[i + 1]))