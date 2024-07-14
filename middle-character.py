def middle_character(s):
    length = len(s)
    if length % 2 != 0:
        return s[length // 2].lower()
    else:
        start = (length - 1) // 2
        end = start + 1
        return "".join([c.lower() for c in s[start:end] if c.isalpha()])