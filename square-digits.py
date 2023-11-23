def square_digits(n):
    return "".join(str(int(d) ** 2) if d not in ("0", "1") else d for d in str(n))