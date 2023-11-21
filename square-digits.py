def square_digits(n):
    return "".join(map(lambda d: str(int(d)**2), str(n)))