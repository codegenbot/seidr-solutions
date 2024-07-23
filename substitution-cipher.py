def decipher_message(cipher1, cipher2, message):
    mapping = {c: d for c, d in zip(cipher1, cipher2)}
    result = "".join(mapping.get(char, char) for char in message)
    return result