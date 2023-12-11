
```
def sum_paired_digits(s):
    return sum(int(i) for i, j in zip(s, s[1:]) if i == j)
```