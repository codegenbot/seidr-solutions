def square_digits(n):
    return "".join(str(int(i) ** 2).rjust(len(str(i)), '0') for i in str(n))