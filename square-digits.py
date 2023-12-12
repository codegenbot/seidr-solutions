def square_digits(num):
    result = ""
    for digit in str(num):
        result += str(int(digit) ** 2)
    return result