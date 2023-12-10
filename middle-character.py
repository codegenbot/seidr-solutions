def middle_character(s):
    allowed_chars = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'
    filtered_s = [char for char in s if char in allowed_chars]
    length = len(filtered_s)
    if length % 2 == 1:
        return filtered_s[length // 2]
    else:
        return filtered_s[length // 2 - 1: length // 2 + 1]