def middle_character(str):
    length = len(str)
    if length % 2 == 0:
        return str[length // 2 - 1:length // 2 + 1]
    else:
        return str[length // 2]