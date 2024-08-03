def middle_character(s):
    s = str(s)  # Convert input to string if it's not already.
    length = len(s)
    middle_index = length // 2

    if length % 2 == 1:
        return s[middle_index]
    else:
        return s[middle_index - 1 : middle_index + 1]