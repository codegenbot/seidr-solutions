
def square_digits(n):
    return "".join(map(lambda x: format(int(x) ** 2), str(n)))