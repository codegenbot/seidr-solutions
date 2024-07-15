def square_digits(n):
    return " ".join(int(i) ** 2 for i in str(n).replace("-", ""))