def middle_character(s):
    length = len(s)
    mid = (length // 2) if length % 2 == 0 else (length - 1) // 2
    return s[mid] if length % 2 == 1 else s[mid - 1:mid + 1]