def square_digits(n):
    return "".join(str(int(d) ** 2).zfill(len(str(n))) for d in str(n))