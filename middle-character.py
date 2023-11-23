def middle_character(string):
    length = len(string)
    if length % 2 == 0:
        return string[length // 2 - 1: length // 2 + 1 + 1]
    else:
        return string[length // 2]