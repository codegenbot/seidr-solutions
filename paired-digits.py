def paired_digits(s):
    return sum(int(d) for d in s if str(10*int(d)+int(d)) in s)