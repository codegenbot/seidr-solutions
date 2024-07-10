n = input()
result = "".join(str(int(digit) ** 2) for digit in n)
print(result)