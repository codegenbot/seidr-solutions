def paired_digits(s):
    s = str(int(s.lstrip('0')))  
    return sum(int(digit) for digit in s if digit == s[s.index(digit)+1])