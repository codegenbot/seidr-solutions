def substitution_cipher(cipher1, cipher2, message):
    cipher_map = str.maketrans({c.lower(): d.lower() for c, d in zip(cipher1, cipher2)}.values())
    return message.translate(cipher_map)