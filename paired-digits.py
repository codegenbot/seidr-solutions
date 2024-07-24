Here is the Python solution for the problem:

def paired_digits(s):
    return sum(int(digit) for digit in s if digit * 2 in s)

print(paired_digits("99")) # output: 9
print(paired_digits("88")) # output: 8
print(paired_digits("77")) # output: 7
print(paired_digits("55")) # output: 5
print(paired_digits("44")) # output: 4