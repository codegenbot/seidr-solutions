def main():
    n = int(input("Enter an integer: "))
    result = "".join(str(int(i) ** 2).rjust(1) for i in str(n))
    print(result)

main()