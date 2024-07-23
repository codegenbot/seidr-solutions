'''Return the middle character(s) of a string. If length is odd, return the middle character; if length is even, return the two middle characters.'''

def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[length // 2 - 1:length // 2 + 1]
    else:
        return s[length // 2]