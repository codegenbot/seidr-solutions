def middle_character(s):
    length = len(s)
    if length == 0:
        return "" 
    elif length % 2 == 1:
        return s[length // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1]