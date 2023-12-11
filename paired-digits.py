```
def sum_paired_digits(s):
    return sum(int(i) for i in s if s[s.index(i)-1] == i or (s[s.index(i)+1] == i and s[0] != s[-1]))
```