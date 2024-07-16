```
def square_digits(n):
    return "".join(str(ord(i) ** 2) for i in str(n))