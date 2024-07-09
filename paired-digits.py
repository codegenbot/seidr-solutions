def paired_digits(s):
    s = str(s)
    total = 0
    prev = None
    for c in s:
        total += int(c) if c.isdigit() and (prev is None or c == prev): 
        prev = c
    return total