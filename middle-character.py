def middle_character(s):
    s = s.strip().upper()
    length = len(s)
    return (
        s[length // 2] if length % 2 else "".join([s[length // 2 - 1], s[length // 2]])
    )