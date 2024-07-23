def paired_digits(s):
    s = str(int(s.lstrip('0')))  
    return sum(int(digit) * 2 for i, digit in enumerate(s) if digit == s[i+1] and (i + 1 < len(s)))