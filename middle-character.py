def middle_character(string):
    middle_index = len(string) // 2
    if len(string) % 2 == 1:
        return string[middle_index]
    else:
        return string[middle_index - 1 : middle_index + 1]