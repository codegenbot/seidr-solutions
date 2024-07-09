```
def paired_digits(s):
    return sum(int(a) for i, (a, b) in enumerate(s) if a == b and i < len(s)-1)