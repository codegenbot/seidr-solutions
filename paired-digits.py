```
def paired_digits(s):
    return sum(int(d) for i,d in enumerate(s) if d == s[i+1] if i < len(s)-1 else None)