def paired_digits(s):
    return sum(int(digit) for digit in s if s[s.index(digit)+1] == digit)

print(paired_digits('99'))  # prints: 9
print(paired_digits('88'))  # prints: 8
print(paired_digits('77'))  # prints: 7
print(paired_digits('55'))  # prints: 5
print(paired_digits('44'))  # prints: 4