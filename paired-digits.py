def paired_digits(s):
    s = ''.join(filter(str.isdigit, s))
    return sum(int(c) for c1, c in zip(s, s[1:]) if c1 == c)