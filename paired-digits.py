def paired_digits(s):
    return sum(int(digit) * 2 for a,b in zip(s,s[1:]) if a==b)