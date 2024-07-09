def paired_digits(s):
    s = str(s)
    total = 0
    prev = None
    for c in s:
        if c != '0' and (c == prev or not prev): 
            total += int(c)
        prev = c
    return total