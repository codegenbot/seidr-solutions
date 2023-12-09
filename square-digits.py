def square_digits(num):
    if num == 0:
        return '0'
    else:
        return ''.join(str(int(d) ** 2) for d in str(num))