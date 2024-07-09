def paired_digits(s):
    return sum(int(c) for i, c in enumerate(s) if (c == s[i-1] and i > 0) or (s[i] == '0'))