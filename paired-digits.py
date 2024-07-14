```
def paired_digits(s):
    return sum(int(d) for d in s if (i := iter(s)).__next__() == d)