def paired_digits(s):
    s = str(int(s))  
    return sum(int(a) for a, b in zip([0]+list(s), list(s)+[0]) if a == b)