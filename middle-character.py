def middle_character(s):
    length = len(s)
    middle_index = length // 2
    if length % 2 == 1:
        return s[middle_index]
    else:
        return s[middle_index-1:middle_index+1]