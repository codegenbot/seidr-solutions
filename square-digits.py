def square_digits(n):
    return "".join([str(int(x) ** 2) for x in str(n)[::-1]])