def main():
    n = int(input("Enter a positive integer: "))
    return "".join(str(int(digit) ** 2) for digit in str(n))