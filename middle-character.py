Here is the Python code for the problem:

def middle_character(s):
    s_len = len(s)
    mid = s_len // 2
    return s[mid] if s_len % 2 else s[mid-1:mid+1]