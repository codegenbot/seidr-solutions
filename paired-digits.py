```
def paired_digits(s):
    return sum(int(d) for d, _ in zip(s, s[1:] if len(s) > 0 else iter(())) if d == _)