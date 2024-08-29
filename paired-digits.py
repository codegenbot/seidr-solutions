def paired_digits(s):
    return sum(int(d) for d in s if d + str(int(d)) in s)