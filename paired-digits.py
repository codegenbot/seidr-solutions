def sum_same_digits(s):
    return sum(int(i) for i in s if s[s.index(i)+1] == i)