```
import itertools
def paired_digits(s):
    s = str(s)
    return sum(int(digit) * 2 for _, digit in itertools.groupby(s))