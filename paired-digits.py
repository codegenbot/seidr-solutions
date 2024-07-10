def paired_digits(s):
    return sum(int(digit) for digit in zip(s, s[1:]) if str(digit)[0] == str(digit)[1])