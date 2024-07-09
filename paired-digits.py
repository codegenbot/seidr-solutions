def paired_digits(s):
    s = ''.join(filter(str.isdigit, s))
    return sum(int(c) for i, c in enumerate(s) if c == s[i+1] if i < len(s)-1 else False)