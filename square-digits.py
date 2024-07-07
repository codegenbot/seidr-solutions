def square_digits(n):
    return sum([str(int(x) ** 2) for x in str(n).split()])