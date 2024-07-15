def paired_digits(s):
    return sum(int(d1) for d1, d2 in zip([s[i] for i in range(len(s))], [s[i+1] if i < len(s)-1 else None]) if d1==d2)