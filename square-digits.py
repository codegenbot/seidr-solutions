def square_digits(n):
    def square_digit(digit):
        return str(int(digit) ** 2)

    return "".join(map(square_digit, str(n)))