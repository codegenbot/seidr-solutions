def middle_character(input_string):
    string_length = len(input_string)
    middle_index = string_length // 2
    
    if string_length % 2 == 1:
        return input_string[middle_index]
    else:
        return input_string[middle_index - 1:middle_index + 1]