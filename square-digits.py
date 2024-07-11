def square_digits(n): 
    return "".join(str(int(i) ** 2).zfill(len(str(n))) for i in str(n))