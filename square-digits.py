```
def square_digits(n):
    """This function squares each digit of the number and concatenates them."""
    return "".join(str(int(i) ** 2) for i in str(n))