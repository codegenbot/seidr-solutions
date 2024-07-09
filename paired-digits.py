def paired_digits(s):
    s = str(s)  
    total = 0
    prev = None
    for c in s:
        if c == prev:
            total += int(c)
        prev = c
    return total