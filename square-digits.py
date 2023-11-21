def square_digits(n):
    if n <= 0:
        return "0"
    return "".join(str(int(d)**2) if d != '0' and d != '1' else d for d in str(n))