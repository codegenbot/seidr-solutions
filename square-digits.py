def square_digits(n):
    return "0" * (len(str(n)) - len(str(bin(n)))) + "".join(
        [str(int(i) ** 2) for i in str(n)]
    )