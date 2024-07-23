def decipher_message(cipher1, cipher2, message):
    mapping = {k: v for k, v in zip(cipher1, cipher2)}
    result = "".join(mapping.get(char.lower(), char) for char in message)
    return result