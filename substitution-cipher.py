def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c2.isalpha():
            char_map[c1] = c2
            char_map[c1.upper()] = c2.upper()
    result = ""
    for c1, c2 in zip(message, cipher1):
        if c2.isalpha() and not c1.isalpha():
            result += char_map.get(c1, c1)
        else:
            result += c2
    return result