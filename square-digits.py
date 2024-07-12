def square_digits(n):
    res = ""
    for i in str(n):
        res += str(int(i) ** 2)
    return res