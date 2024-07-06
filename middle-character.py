def get_middle(s):
    mid = len(s) // 2
    if s[mid].isalpha() or s[mid].isdigit():
        return s[mid]
    elif s[mid].isspecial():
        return s[mid]
    else:
        return s[mid - 1 : mid + 1]