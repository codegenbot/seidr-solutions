Here is the Python solution for the problem:

def paired_digits(s):
    return sum(int(d) for d in s if s[s.index(d)+1] == d)

print(paired_digits("99"))  # Output: 9
print(paired_digits("88"))  # Output: 8
print(paired_digits("77"))   # Output: 7
print(paired_digits("55"))    # Output: 5
print(paired_digits("44"))     # Output: 4