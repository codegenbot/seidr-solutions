def decipher_message(cipher1, cipher2, message):
    encrypt_map = {c1: c2 for c1, c2 in zip(cipher2, cipher1)}
    result = "".join(encrypt_map.get(char, char) for char in message)
    return result