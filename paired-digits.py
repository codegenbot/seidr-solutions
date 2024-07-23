def paired_digits(s):
    s = s.lstrip('0' if len(s) > 1 and s[0] == s[1] else '')
    return sum(int(digit) * 2 for i, digit in enumerate(s) if digit == s[i+1] and (i + 1 < len(s)))