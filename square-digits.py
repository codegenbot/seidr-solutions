def square_digits(n):
    return "".join(map(lambda x: str(x**2), [int(i) for i in str(n)]))