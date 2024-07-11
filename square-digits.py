```
def square_digits(n):
    return "".join(map(lambda x: str(int(x) ** 2), str(n)[0:len(str(n))]))