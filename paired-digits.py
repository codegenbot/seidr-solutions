def paired_digits(s):
    return sum(int(d) for d1, d2 in ((s[i], s[(i+1)%len(s)]) for i in range(len(s))) if str(d1).lstrip('0') == str(d2).lstrip('0'))