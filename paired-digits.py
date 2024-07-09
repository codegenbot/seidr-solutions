def paired_digits(s):
    s = ''.join(filter(str.isdigit, s))
    return sum(int(c) for i, c in enumerate(s) if i < len(s)-1 and c == s[i+1])