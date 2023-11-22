def square_digits(num):
    result = ""
    for digit in str(num):
        square = int(digit) ** 2
        result += str(square)
    return result

num = int(input())
print(square_digits(num))