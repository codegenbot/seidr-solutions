```
def square_digits():
    n = int(input("Enter a positive integer: "))
    return "".join(str(int(i) ** 2) for i in str(n))