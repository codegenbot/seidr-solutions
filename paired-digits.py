def paired_digits(s):
    prev = None
    return sum(
        int(d)
        for d in s
        if (d == str(prev) or (str(prev) == "0" and d == "0")) and prev != None
    )