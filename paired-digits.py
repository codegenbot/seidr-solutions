def paired_digits(s):
    total = 0
    prev = None
    for c in s:
        if c == prev and (c != '0' or s.index(c) == len(s)-1): 
            total += int(c)
        prev = c
    return total