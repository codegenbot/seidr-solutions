def decipher_message(cipher1, cipher2, message):
    encrypt_map = {}
    decrypt_map = {}
    for c1, c2 in zip_longest(cipher1, cipher2):
        if c1 is not None and c2 is not None:
            if c1.isalpha():
                key = c1.upper()
                value = c2.upper() if c2.isupper() else c2.lower()
                encrypt_map[key] = value
                decrypt_map[value] = key

    result = "".join(decrypt_map.get(char.upper(), char) for char in message)
    return result