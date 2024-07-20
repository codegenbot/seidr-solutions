def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char if char.islower() else char.upper(): map_char for char, map_char in zip(cipher1, cipher2)}
    return "".join([cipher_map.get(char.lower(), char) if not char.isalnum() else (char.upper() if char.isupper() else char.lower() if char.islower() else char) for char in message])