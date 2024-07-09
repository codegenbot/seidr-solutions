def paired_digits(s):
    total = 0
    prev = None
    for d in s:
        if int(d) == int(str(prev)[1] or 0):  
            total += int(d)
        prev = d
    return total