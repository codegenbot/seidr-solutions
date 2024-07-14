def middle_character(s):
    s = ''.join(c for c in s if c.isalnum()).lower()
    length = len(s)
    if length % 2 != 0:
        return s[length // 2]
    else:
        start = (length - 1) // 2
        return s[start:start+2]