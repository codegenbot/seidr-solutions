def middle_character(s):
    s = ''.join(e for e in s if e.isalnum()).lower().strip()
    length = len(s)
    if length % 2 != 0:
        return s[length // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1]