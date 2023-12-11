def sum_digits(s):
    return sum(int(c) for c in s if s[i+1] == c)