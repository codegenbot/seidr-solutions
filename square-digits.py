def square_digits(n):
    return "".join([f"{int(i) * int(i):02}" for i in str(n)])