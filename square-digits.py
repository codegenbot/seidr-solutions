num = input()
result = "".join(str(int(digit) ** 2) for digit in num)
print(result)