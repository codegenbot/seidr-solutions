
def square_digits(n):
    return "".join(map(lambda x: str(int(x) ** 2).zfill(len(x)), map(str, int(n))))