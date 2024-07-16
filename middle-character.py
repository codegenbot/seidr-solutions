Here is the solution:

def middle_character(s):
    s = str(s)  # Convert to string if input is not a string
    length = len(s)
    
    if length % 2 != 0:
        return s[(length - 1) // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1]