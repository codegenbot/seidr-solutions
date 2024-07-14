def decipher_cipher(cipher1, cipher2, message):
    mapping = dict(zip(cipher1, cipher2))
    return "".join(mapping.get(char, char) for char in message)