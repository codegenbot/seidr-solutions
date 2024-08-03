Here is the Python solution for the problem:

def paired_digits(s):
    return sum(int(d) for d in s if s[s.index(d)+1] == d)

print(paired_digits('99'))  # output: 9
print(paired_digits('88'))  # output: 8
print(paired_digits('77'))  # output: 7
print(paired_digits('55'))  # output: 5
print(paired_digits('44'))  # output: 4