```
def square_digits(n): 
    squares = [str(int(i) ** 2) for i in str(n)]
    return int("".join(squares))