def square_digits(n):
    return "".join([str(int(x) ** 2) for x in reversed(map(int, str(n)))])