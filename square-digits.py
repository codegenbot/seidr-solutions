def square_digits(n):
    return "".join(str(int(i) ** 2).zfill(1) for i in str(n))