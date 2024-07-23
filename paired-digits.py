def paired_digits(s):
    return sum(int(d1) for d1, d2 in zip(s, s[1:]) if str(int(d1)).lstrip('0') == str(int(d2)).lstrip('0'))