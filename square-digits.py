def square_digits(n):
    return ''.join(str(int(d)*int(d)) for d in str(n))