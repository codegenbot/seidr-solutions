```
def square_digits(n):
    return "".join(i**2 for i in str(n))

input_num = int(input("Enter a positive integer: "))
print(square_digits(input_num))