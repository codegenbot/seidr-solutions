def middle_character(s):
    if len(s) == 0:
        return ""
    length = len(s)
    mid = length // 2
    if not s[mid].isalnum() and not s[mid].isdigit():
        return s[mid]
    return s[mid] if length % 2 != 0 else s[mid - 1:mid + 1]