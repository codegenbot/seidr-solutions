def middle_character(s):
    length = len(s)
    middle_index = length // 2
    if length % 2 == 0:
        return s[middle_index - 1 : middle_index + 1]
    else:
        return s[middle_index]