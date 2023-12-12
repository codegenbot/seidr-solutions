```
def square_digits(n):
    return ''.join(str(int(i)**2).zfill(len(str(n))) for i in str(n))
```
It's worth noting that this code assumes that the input is a positive integer, as mentioned in the problem description. If negative integers or non-integer values are also possible inputs, additional checks and handling may be needed to avoid errors.