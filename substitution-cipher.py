```
def decipher_message(cipher1, cipher2, message):
    encrypt_map = {}
    decrypt_map = {}
    for (c1, c2) in zip_longest(cipher1, cipher2):
        if c1 is not None and c2 is not None:
            if c1.isalpha():
                encrypt_map[c1.upper() if c1.isupper() else c1.lower()] = c2.upper() if c2.isupper() else c2.lower()
            elif c2.isalpha():
                decrypt_map[c2] = c1
    result = "".join(decrypt_map.get(char.upper() if char.isupper() else char.lower(), char) for char in message)
    return result