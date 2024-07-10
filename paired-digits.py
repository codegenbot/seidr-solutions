def paired_digits(s):
    s = "".join(filter(str.isdigit, s))
    if len(s) % 2 != 0:
        return "Error: Input string has an odd length."
    return sum(
        int(digit) for i, digit in enumerate(s) if i < len(s) - 1 and digit == s[i + 1]
    )