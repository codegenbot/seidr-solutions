def square_digits(n):
    return "".join(map(str, map(lambda x: int(x) ** 2, str(n))))