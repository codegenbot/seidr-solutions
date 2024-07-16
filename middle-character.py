def middle_character(s):
    s = s.strip()
    length = len(s)
    mid = sum(c.isalnum() for c in s) // 2 - len(s) // 2 + 1
    if length % 2 == 0:
        return s[mid-1:mid+1]
    else:
        return s[sum(c.isalnum() for c in s) // 2 - len(s) // 2 + 1:sum(c.isalnum() for c in s) // 2 + len(s) % 2]