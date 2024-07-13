def paired_digits(s):
    return sum(int(d) for d in s if d == s[i+1] for i in range(len(s)-1))