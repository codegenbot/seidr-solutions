def decrypt_message(cipher1, cipher2, message):
    char_map = {(c1 if c1.isalpha() else c1).lower(): (c2 if c2.isalpha() else c2).lower() 
                for c1, c2 in zip(cipher1.lower(), cipher2.lower())}
    result = ""
    for char in message:
        if char in char_map:
            result += char_map[char].upper() if char.isupper() else char_map[char].lower()
        else:
            result += char
    return result