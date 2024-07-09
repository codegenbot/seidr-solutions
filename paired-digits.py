def paired_digits(s):
    return sum(int(c) for c in s if c == s[i+1] and i < len(s)-1)