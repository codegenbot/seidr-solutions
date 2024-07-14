def sum_of_paired_digits(s):
    return sum(int(digit) * 2 for digit in s if digit == s[s.index(digit) + 1])