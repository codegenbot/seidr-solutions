def square_digits(n): 
    n = str(abs(int(n))) 
    return "".join(str(int(i) ** 2) for i in n)