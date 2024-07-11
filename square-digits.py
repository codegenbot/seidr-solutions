def main():
    n = int(input("Enter a positive integer: "))
    return "".join(str(int(i) ** 2) for i in str(n))

if __name__ == "__main__":
    print(main())