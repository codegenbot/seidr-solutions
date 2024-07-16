def middle_character(s):
    s = s.strip()
    length = len(s)
    mid = length // 2

    if length % 2:
        return s[mid]
    else:
        return ''.join([c for c in s[mid-(-length//2):mid+1]])