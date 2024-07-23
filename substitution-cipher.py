def decipher_message(cipher1, cipher2, message):
    mapping_encrypt = {c: d for c, d in zip(cipher1, cipher2)}
    result = "".join(mapping_encrypt.get(char, char) for char in message)
    return result