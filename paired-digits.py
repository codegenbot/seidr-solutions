def paired_digits(s):
    return sum(int(dig) for dig in s if s[i] == s[i + 1])