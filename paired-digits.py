def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s + '0') if i % 2 == 1 and d == s[i // 2])