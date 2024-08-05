Here is the solution:

def middle_character(s):
    s = str(s)  # Ensure s is a string
    
    length = len(s)
    
    if length % 2 != 0: 
        return s[length // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1]