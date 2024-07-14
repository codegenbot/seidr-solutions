def middle_character(s):
    s = "".join(e for e in s if e.isalnum()).strip()
    length = len(s)
    if length % 2 != 0:
        return (
            s[length // 2].lower() if s[length // 2].isalpha() else str(s[length // 2])
        )
    else:
        half = length // 2
        return s[half - 1 : half + 1].lower()