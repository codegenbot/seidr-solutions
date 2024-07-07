def square_digits(n):
    return "".join([str(int(x) ** 2) for x in reversed(map(int, str(n)))])

OR

from functools import reduce
def square_digits(n):
    return reduce(lambda x, y: str(int(x) ** 2) + str(int(y) ** 2), map(int, str(n)))