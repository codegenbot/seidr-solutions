def square_digits(n):
    if not isinstance(n, int) or n < 1:
        return "Input should be a positive integer."
    
    return "".join(str(int(i) ** 2) for i in str(n).replace("-", ""))