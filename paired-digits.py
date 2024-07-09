def paired_digits(s):
    s = str(s)  
    total = 0
    prev = None
    pair_total = 0
    for c in s:
        if c == prev and c != '0': 
            pair_total += int(c) + int(prev)
        prev = c
    return total + pair_total