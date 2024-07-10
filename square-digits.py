def square_digits(n):
    if n > 0:
        return "".join(str(int(i) ** 2) for i in str(n))