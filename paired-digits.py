```
def paired_digits(s):
    return sum(int(d) for d, _ in enumerate(s) if s[_+1] == str(d))