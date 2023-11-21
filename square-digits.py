def square_digits(n):
    if n == '':
        return ''
    else:
        return ''.join(str(int(d)**2) for d in str(n))