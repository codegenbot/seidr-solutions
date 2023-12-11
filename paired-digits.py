def paired_digits(s):
    return sum(int(i) for i in s if i == s[1])