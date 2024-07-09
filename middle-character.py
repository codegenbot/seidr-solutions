```Python
def middle_character(s):
    length = len(s)
    mid_point = length // 2
    
    if length % 2 == 0:
        return ''.join([c if c.isalnum() else '_' for c in s[mid_point - 1:mid_point + 1]])
    else:
        return ''.join([c if c.isalnum() else '_' for c in s[mid_point]])