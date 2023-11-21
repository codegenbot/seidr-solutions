def square_digits(n):
    if not n:
        return '0'
    return "".join(str(int(d) ** 2) for d in str(n))