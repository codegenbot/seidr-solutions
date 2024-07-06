def square_digits(n):
    return "".join(map(lambda x: str(int(x * x)), str(n)))