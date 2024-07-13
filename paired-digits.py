def paired_digits(s):
    return sum(int(x) for i, x in enumerate(s) if (i + 1 < len(s) or i == len(s)-1) and s[i+1] == x)