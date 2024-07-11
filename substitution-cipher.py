def decipher(cipher1, cipher2, message):
    cipher_map = str.maketrans(cipher1, cipher2)
    return message.translate(cipher_map)