Here is the Python code for the problem:

def middle_character(s):
    s = s.strip()  # remove leading and trailing spaces
    length = len(s)
    if length % 2 == 0:  # even length
        return s[length//2-1:length//2+1]
    else:  # odd length
        return s[length//2]