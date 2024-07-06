def square_digits(n):
    result = ''
    for c in str(n):
        result += str(int(c) ** 2)
    return result