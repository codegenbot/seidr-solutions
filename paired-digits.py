def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s.strip('0')) if i < len(s) - 1 and str(int(s[i+1])) == digit)