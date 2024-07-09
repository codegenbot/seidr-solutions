def paired_digits(s):
    return sum(int(digit) * 2 for p in set(map(''.join, zip(s, s[1:]))) if p[0] == p[1])