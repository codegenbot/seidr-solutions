def middle_character(s):
    length = len(s)
    mid = length // 2
    if length % 2 == 0:
        return s[mid-1:mid+1].lower()
    else:
        if not s[mid].islower():
            return '>'
        return s[mid].lower()