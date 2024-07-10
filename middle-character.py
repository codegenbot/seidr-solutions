def middle_character(s):
    s = s.lower()
    length = len(s)
    mid = length // 2 if length % 2 == 0 else length // 2
    if length % 2 == 0:
        return s[mid-1:mid+1]
    elif length % 2 != 0 and mid == length - 1:
        return s[mid]
    else:
        return s[mid:mid+1]