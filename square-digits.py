```
def square_digits(n):
    return "".join(str(int(i) ** 2) for i in str(n))

if __name__ == '__main__':
    input_num = int(input("Enter a positive integer: "))
    print(square_digits(input_num))