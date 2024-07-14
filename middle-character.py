def middle_character(s):
    s = ''.join(e for e in s if e.isalnum()).strip()
    length = len(s)
    if length % 2 != 0:
        return s[length // 2].lower()
    else:
        return s[length // 2 - 1:length // 2 + 1].lower()