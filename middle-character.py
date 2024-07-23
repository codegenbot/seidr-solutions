def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[length // 2 - 1:length // 2 + 1]
    else:
        for char in s[length // 2]:
            if char.isalnum():
                return char