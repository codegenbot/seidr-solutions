def get_middle(s):
    mid = len(s) // 2
    if s[mid] in s:
        return s[mid]
    else:
        return s[mid - 1 : mid + 2]