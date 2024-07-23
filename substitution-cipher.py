def decipher_message(cipher1, cipher2, message):
    case = len([char for char in cipher1 if char.isupper]) > 0
    encrypt_map = {}
    decrypt_map = {}
    for (c1, c2) in zip_longest(cipher1, cipher2):
        if c1 is not None:
            if c1.isalpha():
                encrypt_map[c1.upper() if c1.isupper() else c1.lower()] = c2 if c2.isalpha() else ''
            elif c1.isalpha():
                decrypt_map[c1] = c2 if c2 else ''
    result = "".join(decrypt_map.get(char.upper() if case else char.lower(), char) for char in message)
    return result