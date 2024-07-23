def middle_character(s):
    length = len(s)
    mid = length // 2
    if length % 2 == 0:
        return ''.join([c.lower() for c in s[mid-1:mid+2] if c.isalpha()]).strip()
    else:
        return ''.join([c.lower() for c in s[mid:mid+1] if c.isalpha()]).strip()