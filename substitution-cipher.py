def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char1: char2 for char1, char2 in zip(cipher1.lower(), cipher2.lower())}
    return ''.join([cipher_map.get(char, char) for char in message.lower()])