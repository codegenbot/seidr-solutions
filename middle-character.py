def get_middle(s):
    if len(s) % 2 == 0:
        return s[::2]
    else:
        mid = len(s) // 2
        if s[mid].isalpha() or s[mid].isdigit():
            return s[mid]
        else:
            return s[mid - 1 : mid + 1]