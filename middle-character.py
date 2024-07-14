import re

def middle_character(s):
    s = re.sub('[^a-zA-Z]', '', s).lower().strip()
    length = len(s)
    if length % 2 != 0:
        return s[length // 2]
    else:
        return s[(length - 1) // 2:(length + 1) // 2]