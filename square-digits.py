```
def square_digits(n):
    result = 0
    for i in str(n):
        result += int(i) ** 2
    return str(result)

num = int(input("Enter a positive integer: "))
print(square_digits(num))