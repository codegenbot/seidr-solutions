
def sum_paired_digits(s):
    return sum(int(c) for c in s if c == s[0] and c == s[1])