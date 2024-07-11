def paired_digits(s):
    return sum(
        int(digit)
        for digit in s
        if s.index(str(int(digit) + 1)) != s.rindex(str(int(digit) + 1))
    )