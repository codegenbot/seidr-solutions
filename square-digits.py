def main():
    n = int(input("Enter a positive integer: "))
    print("".join(str(int(digit) ** 2) for digit in str(n).replace('-','').replace('(','').replace(')', '')))