def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s[1:]) if d == s[i - 1] and int(d) != 0)