Here is the solution:

def paired_digits(s):
    return sum(int(d) for d in s if d*2 in s[1:])