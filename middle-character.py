def middle_character(string):
    length = len(string)
    
    if length % 2 == 0:
        middle_index = length // 2 - 1
        return string[middle_index : middle_index + 2]
    else:
        middle_index = length // 2
        return string[middle_index]