def paired_digits(s):
    total = 0
    prev = None
    for d in s:
        if d == str(prev) and prev is not None:  
            total += int(d)
        prev = d
    return total