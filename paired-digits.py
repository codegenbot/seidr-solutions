def sum_paired_digits(s):
    return sum(int(i) for i, j in enumerate(s) if s[j] == s[j+1])