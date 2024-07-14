def middle_character(s):
    length = len(s)
    if length % 2 != 0:
        return s[length // 2].lower()
    else:
        start = (length - 1) // 2
        return f"{s[start].lower()}{s[start+1].lower()}" if length > 2 else ""