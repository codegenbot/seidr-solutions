```
def paired_digits(s):
    total_sum = 0
    for i, d1 in enumerate(s):
        d2 = s[i+1] if i < len(s)-1 else None
        if d1 == d2:
            total_sum += int(d1) * 2
    return total_sum