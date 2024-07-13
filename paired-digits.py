def paired_digits(s):
    return sum(int(d1) for i,d1 in enumerate(s) if i%2==0 and d1==s[i+1])