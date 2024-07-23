def paired_digits(s):
    s = s.lstrip('0' if len(s) > 1 and s[0:2] == '00' else '')
    return sum(int(digit) for i, digit in enumerate(s) if (i+1 < len(s) or not digit.isdigit()) and digit == str(int(s[i+1])) and (i + 1 < len(s)))