def middle_character(s):
    length = sum(1 for c in s if c.isalnum())
    if length % 2 == 0:
        return s[length // 2 - 1:length // 2 + 1]
    else:
        return s[length // 2]