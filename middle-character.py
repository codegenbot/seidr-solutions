def middle_character(s):
    length = len(s)
    mid = length // 2
    for i in range(mid-1, -1, -1) or range(mid+1, length):
        if s[i].isalnum():
            return s[i:i+2] if length % 2 == 0 else s[i]