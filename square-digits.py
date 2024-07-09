def square_digits(n): 
    res = ''
    n = str(n)
    while n:
        digit = n[0]
        res += str(int(digit) ** 2)
        n = n[1:]
    return res