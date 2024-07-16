def main():
    s = input("Enter a string of digits: ")
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i + 1]:
            total += s[i]
    print(total)


if __name__ == "__main__":
    main()