Here is the Python solution for the "paired-digits" problem:

def paired_digits(s):
    return sum(int(dig) for dig in s if s[i] == s[i+1])