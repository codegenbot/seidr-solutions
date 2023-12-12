
>>> Square-digits

def square_digits(n):
    return ''.join(str(int(i)**2) for i in str(n))

>>> square_digits(10)
'100'