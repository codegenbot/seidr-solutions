```
def middle_character(s):
    s = str(s)  # Ensure s is a string
    length = len(s)
    middle_index = length // 2
    
    if length % 2 == 0:  # Even length
        return s[middle_index - 1:middle_index + 1]
    else:  # Odd length
        return s[middle_index]