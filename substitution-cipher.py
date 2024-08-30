def decipher_cipher(cipher1, cipher2, message):
    cipher_map = {k: v for k, v in zip(cipher1, cipher2)}
    return "".join([cipher_map.get(char, char) for char in message])