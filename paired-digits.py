Here is the solution:

def paired_digits(s):
    return sum(int(d) for d in s if s[s.index(d)+1] == d)

print(paired_digits('99'))  #9
print(paired_digits('88'))  #8
print(paired_digits('77'))  #7
print(paired_digits('55'))  #5
print(paired_digits('44'))  #4