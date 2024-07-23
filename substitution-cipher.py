def decipher_message(cipher1, cipher2, message):
    mapping_encrypt = {c: d for c, d in zip(cipher1, cipher2)}
    mapping_decrypt = {v: k for k, v in mapping_encrypt.items()}
    result = "".join(mapping_decrypt.get(char, char) for char in message)
    return result