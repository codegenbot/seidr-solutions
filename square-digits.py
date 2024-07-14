def square_digits(n):
    if not isinstance(n, int) or n <= 0:
        return "Invalid input"
    return "".join(str(int(i) ** 2) for i in str(abs(n)))