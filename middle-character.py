Here is the Python solution for the problem:

def middle_character(s):
    length = len(s)
    middle_index = length // 2
    
    if length % 2 == 1: # if the string length is odd
        return s[middle_index]
    else: # if the string length is even
        return s[middle_index-1:middle_index+1]