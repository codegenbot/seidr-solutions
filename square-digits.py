def square_digits(n):
    try:
        return "".join(str(int(i) ** 2) for i in str(n))
    except ValueError:
        return "Program did not receive expected input"