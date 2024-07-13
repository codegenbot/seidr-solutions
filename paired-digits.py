```
import itertools

def paired_digits(s):
    return sum(int(d) for _, d in itertools.groupby(s))