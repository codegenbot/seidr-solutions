```
def middle_character(s):
    s_len = len(s)
    if s_len % 2 == 0:
        return s[slen//2 -1:slen//2 +1]
    else:
        return s[slen//2]