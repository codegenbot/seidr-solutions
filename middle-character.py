def middle_character(s):
    if len(s) % 2 == 1:  # odd length
        return s[len(s)//2]
    else:  # even length
        return s[len(s)//2 - 1 : len(s)//2 + 1]