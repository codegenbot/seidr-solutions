def paired_digits(s):
    return sum(int(d) for d, i in enumerate(s) if i+1 < len(s) and s[i+1] == str(d)[0])