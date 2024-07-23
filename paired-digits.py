def paired_digits(s):
    return sum(int(digit) for i in range(len(s)-2) if s[i] == s[i+1] and s[i+1] == s[i+2])