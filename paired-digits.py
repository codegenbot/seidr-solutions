def paired_digits(s):
    return sum(int(d) for d in s if d == s[i+1] and i < len(s)-1)