def middle_character(string):
    middle_index = len(string) // 2
    return string[middle_index] if len(string) % 2 == 1 else string[middle_index-1 : middle_index+1]