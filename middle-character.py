def middle_character(input_string):
    if len(input_string) % 2 == 1:
        return input_string[len(input_string)//2]
    else:
        return input_string[(len(input_string)-1)//2:] + input_string[(len(input_string)+1)//2]