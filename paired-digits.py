def get_sum(s):
    return sum(int(i) for i in s if s[s.index(i)+1] == i)