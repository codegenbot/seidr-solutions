def middle_character(s):
    s = ''.join(e for e in s if e.isalnum()).strip()
    length = len(s)
    if length % 2 != 0:
        return s[length // 2].lower() if s[length // 2].isalpha() else s[length // 2]
    else:
        return s[(length - 1) // 2:(length + 1) // 2].lower()