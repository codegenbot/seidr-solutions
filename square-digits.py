Here is the Python code to solve the problem:

def square_digits(n):
    return ''.join(str(int(digit) ** 2) for digit in str(n))