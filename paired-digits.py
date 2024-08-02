Here's a Python function that solves the problem:

def paired_digits(s):
    return sum(int(d) for d in s if d == s[s.index(d)+1])