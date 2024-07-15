def paired_digits(s):
    return sum(int(d1) for i, d1 in enumerate(s) if i < len(s)-1 and int(d1) == int(s[i+1]))