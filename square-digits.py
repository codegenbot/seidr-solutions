def square_digits(num):
    return ''.join(map(str, [int(d)**2 for d in str(num)]))