def paired_digits(s):
    return sum(
        int(digit)
        for digit in s
        if digit * 2 == int(s[i + 1])
        for i in range(len(s) - 1)
    )