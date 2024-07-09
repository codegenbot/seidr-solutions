def paired_digits(s):
    s = str(s)  
    total = 0
    prev = None
    pair_total = 0
    for c in s:
        if c == prev: 
            pair_total += int(c)
        prev = c
    return pair_total