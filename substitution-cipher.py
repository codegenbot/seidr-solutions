def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char: map_char for char, map_char in zip(cipher1, cipher2)}
    return "".join([cipher_map.get(char, char) for char in message])