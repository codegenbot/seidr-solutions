def paired_digits(s):
    return sum(int(digit) for i, (digit1, digit2) in enumerate(zip(s[i:] for i in range(len(s)) if s[i] == s[i+1])))