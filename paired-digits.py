def paired_digits(s):
    return sum(int(a) for a, b in zip(s, s[1:]) if int(str(a)) == int(str(b)))