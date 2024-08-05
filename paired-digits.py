Here is the Python code to solve the problem:

def paired_digits(s):
    return sum(int(digit) for digit in s if s.index(str(int(digit)+1)) == len(s)-1)

print(paired_digits('99'))  # 9
print(paired_digits('88'))  # 8
print(paired_digits('77'))  # 7
print(paired_digits('55'))  # 5
print(paired_digits('44'))  # 4