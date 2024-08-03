def paired_digits(s):
    return sum(int(digit) for pair in zip(s, s[1:]) if pair[0] == pair[1])