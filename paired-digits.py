def paired_digits(s):
    return sum(int(digit) for digit in s if s[i+1] == digit for i in range(len(s)-1))