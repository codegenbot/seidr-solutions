def paired_digits(s):
    return sum(int(d) for d in s if s[i] == d for i in range(len(s)-1))