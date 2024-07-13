def paired_digits(s):
    return sum(int(x) for i, x in enumerate(s) if (i + 1 < len(s) and s[i+1] == x and int(x) != 0))