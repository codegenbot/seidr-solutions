def main():
    n = int(input("Enter a positive integer: "))
    result = ''
    for i in str(n):
        result += str(int(i) ** 2)
    print(result)