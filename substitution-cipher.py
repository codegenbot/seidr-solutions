def decipher_message(cipher1, cipher2, message):
    mapping = dict(zip(sorted(cipher1.lower()), sorted(cipher2.lower())))
    result = "".join(mapping.get(char.lower(), char) for char in message)
    return result