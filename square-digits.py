```
n = int(input("Enter a number: "))
print(''.join(str(int(i) ** 2) for i in str(n)))