def paired_digits(s):
    s += '0'  
    return sum(int(d) for i, d in enumerate(s) if i % 2 == 0 and d == s[i+1])