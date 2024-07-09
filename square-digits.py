def main():
    n = int(input("Enter an integer: "))
    result = str(n) + "".join(str(int(i) ** 2) for i in str(n))
    print(result)

if __name__ == "__main__":
    main()