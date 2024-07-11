def middle_character(s):
    n = len(s)
    if n % 2 == 0:
        return s[n // 2 - 1 : n // 2 + 1]
    else:
        return s[n // 2]


# Read input from user
s = input()
print(middle_character(s))