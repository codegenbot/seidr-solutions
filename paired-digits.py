def paired_digits(s):
    return sum(int(digit) for pair in zip([s[i] for i in range(0, len(s), 2)], [s[i] for i in range(1, len(s), 2)]) for digit in pair if digit == pair[1])