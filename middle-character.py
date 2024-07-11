def middle_character(input_string):
    length = len(input_string)
    if length % 2 == 0:
        return input_string[length // 2 - 1: length // 2 + 1]
    else:
        return input_string[length // 2]