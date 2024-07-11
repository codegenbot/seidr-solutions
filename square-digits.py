def square_digits(n):
    result = ''
    for char in str(n):
        if char.isdigit():
            result += str(int(char) ** 2)
    return result