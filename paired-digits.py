````
def paired_digits(s):
    """sum of digits whose following digit is the same"""
    return sum(int(digit) for i, digit in enumerate(s) if i < len(s)-1 and str(digit*10+int(s[i+1]))[0] == '1')