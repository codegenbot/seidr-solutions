def square_digits(n):
    return "".join(map(str, [int(i) ** 2 for i in str(n)]))