def sum_digits(s):
    return int(sum(int(i) for i in s if s[s.index(i)+1] == i))