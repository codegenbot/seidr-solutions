def middle_character(s):
    if len(s) % 2 == 1:
        return s[len(s) // 2]
    else:
        return s[len(s) // 2 - 1: len(s) // 2 + 1]

s = input()
print(middle_character(s))