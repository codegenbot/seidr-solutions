def square_digits(n):
    return "".join(format(int(d) ** 2, "02") for d in str(n))