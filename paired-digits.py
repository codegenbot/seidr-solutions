def paired_digits(s):
    s = str(s)
    return sum(
        int(digit) for digit in set(s[i] for i in range(len(s) - 1) if s[i] == s[i + 1])
    )