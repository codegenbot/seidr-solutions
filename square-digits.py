def square_digits(n):
    return "".join(str((i - '0') ** 2) for i in str(abs(n)).replace("-", ""))