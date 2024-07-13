def paired_digits(s):
    return sum(int(x) for x in s if x == s[i + 1] or i == len(s) - 1)