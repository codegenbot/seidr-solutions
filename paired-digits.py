def paired_digits(s):
    return sum(int(digit) * 2 for p in [(s[i], s[i+1]) for i in range(len(s)-1)] if p[0] == p[1])