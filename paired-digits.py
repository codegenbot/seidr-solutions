def paired_digits(s):
    return sum(int(s[i]) for i in range(len(s) - 1) if s[i] == s[i + 1])


# Read input from user
s = input()
print(paired_digits(s))