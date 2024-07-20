def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char: map_char for char, map_char in zip(cipher1.lower(), cipher2.lower())}
    for char in set(cipher1) - set(cipher2):
        if char.isupper():
            cipher_map[char] = cipher_map.get(char.lower()).upper()
        else:
            cipher_map[char] = cipher_map.get(char).upper() if not any(char.isalnum()) else char
    
    return "".join([cipher_map.get(char.lower(), char) for char in message])