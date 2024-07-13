def middle_character(s):
    length = len(s)
    mid = length // 2
    if length % 2 == 0:
        return s[mid-1:mid]+s[mid]
    else:
        return s[mid]