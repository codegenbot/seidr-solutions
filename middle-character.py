def middle_character(string):
    length = len(string)
    middle_index = length // 2
    
    if length % 2 == 1:
        return string[middle_index]
    else:
        return string[middle_index - 1:middle_index + 1]