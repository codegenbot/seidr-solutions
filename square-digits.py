```
def square_digits(n):
    """Given a positive integer, square each digit and concatenate the squares into a returned string."""
    return ''.join(str(int(i) ** 2) for i in str(n))

num = int(input("Enter a positive integer: "))
print(square_digits(num))