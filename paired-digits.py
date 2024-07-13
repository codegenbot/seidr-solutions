def paired_digits(s):
    return sum(
        int(digit)
        for digit in s
        if s.index(digit) + 1 < len(s) and digit * 2 == int(s[s.index(digit) + 1])
    )