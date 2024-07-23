def decipher_message(cipher1, cipher2, message):
    mapping = dict(zip(sorted(cipher1), sorted(cipher2)))
    result = "".join(mapping.get(char.lower(), char) for char in message)
    return result