def square_digits(n):
    if str(n)[0] == "0":
        return "0"
    else:
        return "".join([str(int(x) ** 2) for x in str(n)])