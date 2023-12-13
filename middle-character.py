def middle_character(string):
    length = len(string)
    return string[length//2-1:length//2+1] if length % 2 == 0 else string[length//2]