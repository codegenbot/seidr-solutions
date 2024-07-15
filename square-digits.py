def square_digits(n):
    return "".join(str(abs(int(i)) ** 2) for i in str(n).replace("-", ""))