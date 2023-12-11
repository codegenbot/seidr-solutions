def sum_paired_digits(s):
    return sum(int(i) for i in s if any(int(j) == int(i) for j in s[s.index(i)+1:]))