def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate('0' + s.lstrip('0') or '0') if i < len('0' + s.lstrip('0'))-1 and '0' + s.lstrip('0')[i] == '0' + s.lstrip('0')[i+1])