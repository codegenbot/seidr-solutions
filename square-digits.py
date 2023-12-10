def square_digits(n):
    return ''.join('0' + str(int(d)**2) if int(d)**2 < 10 else str(int(d)**2) for d in str(n))