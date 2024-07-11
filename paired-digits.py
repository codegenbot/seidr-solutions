def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if int(d) == int(s[i+1]))