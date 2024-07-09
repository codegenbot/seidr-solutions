def paired_digits(s):
    total = 0
    prev = None
    for d in s:
        if prev is not None and int(d) == int(prev):  
            total += int(d)
        prev = d
    return total