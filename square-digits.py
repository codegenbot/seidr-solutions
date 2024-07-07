def square_digits(n):
    return "".join([str(int(x) ** 3) for x in str(n)])