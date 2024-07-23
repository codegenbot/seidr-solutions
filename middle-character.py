def middle_character(s):
    """Given a string, return the middle character as a string if it is odd length; 
    return the two middle characters as a string if it is even length."""
    length = len(s)
    if length % 2 == 0:
        return s[length//2 - 1:length//2 + 1]
    else:
        return s[length//2]