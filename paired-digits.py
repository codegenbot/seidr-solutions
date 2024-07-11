def paired_digits(s):
    return sum(int(d) for d in s if d == s[(i+1)%len(s)] for i in range(len(s)))