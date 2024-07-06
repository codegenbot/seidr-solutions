def get_middle(s):
    if len(s) % 2 == 0:
        mid = len(s) // 2
        return s[mid - 1 : mid + 1]
    else:
        mid = len(s) // 2
        return s[mid]