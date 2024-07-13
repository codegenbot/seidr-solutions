def square_digits(n):
    try:
        return "".join(str(int(digit) ** 2) for digit in str(n).replace(" ", ""))
    except ValueError:
        return "Program did not receive expected input"