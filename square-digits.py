def square_digits(n): 
    return "".join(str((int(i) - ord('0'))**2) for i in str(n))