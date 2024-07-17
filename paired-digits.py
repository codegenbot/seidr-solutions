def paired_digits(s):
    return sum(int(d) for d in s if s[i] == s[i + 1])