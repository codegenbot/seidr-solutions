def decipher_message(cipher1, cipher2, message):
    encrypt_map = {}
    decrypt_map = {}
    for c1, c2 in zip_longest(cipher1, cipher2):
        if c1 is not None and c2 is not None:
            if c1.isalpha() and c2.isalpha():
                key = c1.upper()
                value = c2.upper() if c2.isupper() else c2.lower()
                encrypt_map[key] = value
                decrypt_map[value] = key

    # Create a translation table from the cipher map
    translate_table = str.maketrans({k: v for k, v in decrypt_map.items()})
    
    result = message.translate(translate_table)
    return result