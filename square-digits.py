```
def square_digits(n):
    return ''.join(str(int(i)**2).zfill(len(str(n))) for i in str(n))
```
This code will correctly handle leading zeros when concatenating the squares of each digit.