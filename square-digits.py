def square_digits(n): 
    return "".join(str(int(i) ** 2).zfill(2) for i in str(n).lstrip('0') or '0')