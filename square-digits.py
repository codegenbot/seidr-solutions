```
def square_digits(n):
    return "".join(str((ord(c) - 48) ** 2) for c in str(n))