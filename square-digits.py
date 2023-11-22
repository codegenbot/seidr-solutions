def square_digits(n):
    return ''.join(str(int(d)**2) for d in str(n))

n = int(input())
print(square_digits(n))