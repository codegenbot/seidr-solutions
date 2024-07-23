def paired_digits(s):
    s = s.lstrip('0')
    return sum(int(digit) for i, digit in enumerate(s) if i % 2 == 0 and (s[i] == s[i+1] or i == len(s)-1))