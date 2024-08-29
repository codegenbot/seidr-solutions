def paired_digits(s):
    return sum(int(c) for c in s if c == s[i + 1] for i in range(len(s) - 1))