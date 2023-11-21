def middle_character(string):
    length = len(string)
    if length % 2 == 1:
        return string[(length - 1) // 2]
    else:
        return string[(length - 1) // 2:(length + 1) // 2 + 1]