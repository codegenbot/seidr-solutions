```
def middle_character(s):
    s_len = len(s)
    middle_index = s_len // 2
    return s[middle_index] if s_len % 2 else s[middle_index - 1:middle_index + 1]