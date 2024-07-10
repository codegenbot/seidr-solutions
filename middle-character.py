def middle_character(s):
    index = len(s) // 2
    if len(s) % 2 == 0:
        return s[index - 1 : index + 1]
    else:
        return s[index]