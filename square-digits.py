def square_digits(n):
    return "".join(map(lambda x: str(int(x) ** 2), [int(i) for i in str(n)]))