def paired_digits(s):
    return sum(int(d) for d in s if int(s[i+1]) == int(d))