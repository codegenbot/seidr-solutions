def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char1: char2 for char1, char2 in zip(cipher1.lower(), cipher2.lower())}
    cipher_map_upper = {char1.upper(): char2.upper() for char1, char2 in zip([c.upper() for c in cipher2], [c.upper() for c in cipher1])}

    return "".join([cipher_map.get(char.lower(), char) if not char.isalnum() else (char.upper() if char.isupper() else char.lower() if char.islower() else char) for char in message])