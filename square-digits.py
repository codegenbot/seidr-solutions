def square_digits(n):
    return "".join(str(int(d) ** 2) if d != '0' and d != '1' else '0' if d == '0' else d for d in str(n))