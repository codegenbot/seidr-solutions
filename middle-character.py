Here is the Python solution for the problem:

def middle_character(s):
    s = s.strip()
    if len(s) % 2 != 0:
        return s[len(s)//2]
    else:
        return s[len(s)//2-1:len(s)//2+1]