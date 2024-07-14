def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            char_map[c1] = c2
    result = ""
    for char in message:
        if char.isalpha() and char.lower() in char_map:
            result += (char_map[char.lower()] if char.isupper() else 
                       char_map[char.lower()].lower())
        else:
            result += char  # or c2 if you want to maintain the case, but that would depend on the problem requirements
    return result