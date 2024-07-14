def paired_digits(s):
    return sum(int(d1) for i in range(0, len(s)) if s[i] != '0' and (i < len(s)-1 and s[i] == s[i+1]))