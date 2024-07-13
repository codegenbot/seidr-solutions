import re

def middle_character(s):
    length = len(re.sub('[^a-zA-Z0-9]', '', s))
    if length % 2 == 1:
        return s[length // 2]
    else:
        return s[(length // 2) - 1:length // 2 + 1]