```
def middle_character(s):
    s = ''.join(e for e in s if e.isalnum() or e.isspace())
    length = len(s)
    if length % 2 != 0:
        return s[length // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1]