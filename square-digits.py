def square_digits(n):
    return ''.join([str(int(digit)**2) for digit in str(n)])
    
n = int(input())
print(square_digits(n))