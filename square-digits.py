def square_digits(n):
    result = ''
    for i in str(n):
        result += str(int(i) ** 2)
    return result