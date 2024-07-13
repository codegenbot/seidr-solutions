def middle_character(input_str):
    length = len(input_str)
    if length % 2 == 0:
        return input_str[length // 2 - 1:length // 2 + 1]
    else:
        return input_str[length // 2]