```
def middle_character(s):
    s = ''.join(e for e in s if e.isalnum()).strip()
    length = len(s)
    mid = length // 2
    
    return s[mid] if length % 2 else s[mid-1:mid+1]