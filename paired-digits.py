def sum_same_digits(s):
    return sum(int(c) for c in s if s[s.index(c)+1] == c)