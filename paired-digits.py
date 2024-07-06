def paired_digits(s):
    prev = None
    total = 0
    for i in s:
        if i == prev:
            total += int(i)
        prev = i
    return total