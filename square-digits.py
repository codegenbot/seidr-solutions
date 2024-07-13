def square_digits(n): 
    return int("".join([str(i)**2 for i in str(n)]))