```
def square_digits(n):
    print(''.join(str(int(i) ** 2) for i in str(n)))