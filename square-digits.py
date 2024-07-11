def square_digits(n):
    return "".join(format(int(i) ** 2, "d") for i in str(n))