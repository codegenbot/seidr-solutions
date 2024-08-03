Here is the solution in Python:

def middle_character(s):
    length = len(s)
    middle = length // 2
    if length % 2 == 0:
        return s[middle-1:middle+1]
    else:
        return s[middle]