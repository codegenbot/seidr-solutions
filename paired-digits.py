def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if (i+1 < len(s) and s[i+1] == d) or (s.rindex(d)+1==0))