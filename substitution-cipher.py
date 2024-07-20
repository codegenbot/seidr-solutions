def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char: map_char for char, map_char in zip(cipher1.lower(), cipher2.lower())}
    for char in set(cipher1) - set(cipher2):
        cipher_map[char] = cipher_map.get(char.upper()).upper()
    
    return "".join([cipher_map.get(char.lower(), char) if not char.isalnum() else (char.upper() if char.isupper() else char.lower() if char.islower() else char) for char in message])