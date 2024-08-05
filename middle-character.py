Here is the Python solution for the problem:

def middle_character(s):
    s = str(s)  # convert to string if input is not a string
    length = len(s)
    if length % 2 == 0:
        return s[length // 2 - 1:length // 2 + 1]
    else:
        return s[length // 2]