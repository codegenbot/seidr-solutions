def square_digits(n):
    return "".join(map(lambda x: str(int(x) * int(x)), str(n)))