def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char.lower(): map_char for char, map_char in zip(cipher1.lower(), cipher2.lower())}
    return "".join([cipher_map.get(char.lower(), char) for char in message.lower()])