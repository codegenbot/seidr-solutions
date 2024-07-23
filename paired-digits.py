def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if i < len(s)-1 and str(int(s[i+1])).zfill(len(digit)) == str(i).zfill(len(digit)+1)[1])