```
def paired_digits(s):
    return sum(int(d) for d, next_d in zip(s, s[1:]) if d == next_d)