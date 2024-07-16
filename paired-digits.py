def paired_digits(s):
    return sum(int(y) + int(x) for x, y in zip(s, s[1:]) if x == y)

print(paired_digits(input("Enter a string of digits: ")))