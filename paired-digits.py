def paired_digits(s):
    if __name__ == "__main__":
        s = input("Enter a string of digits: ")
        print(
            sum(
                int(d)
                for i, d in enumerate(s)
                if i < len(s) - 1 and int(d) == int(s[i + 1])
            )
        )