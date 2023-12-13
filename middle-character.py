def middle_character(string):
    length = len(string)
    if length % 2 == 0:
        return str(string[length//2-1:length//2+1])
    else:
        return str(string[length//2])