def square_digits(n):
    n = str(n)
    return "".join([f"{int(x) ** 2:02d}" for x in map(int, str(n))])