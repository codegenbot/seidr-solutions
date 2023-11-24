def square_digits(n):
    return ''.join(str(int(d)**2) for d in str(n))

print(square_digits(476219))