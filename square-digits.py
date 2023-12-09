def square_digits(num):
    if num == 0 or str(num) == '0':
        return '0'
    return ''.join(str(int(d)**2) for d in str(num))