def paired_digits(s):
    total = 0
    prev = None
    for d in s:
        if int(d) // 10 == int(str(prev) or 0):  
            total += int(d)
        prev = d
    return total