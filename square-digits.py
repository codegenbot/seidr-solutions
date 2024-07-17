def square_digits(n):
    return "".join(str(int(i) ** int(i)) for i in str(n))