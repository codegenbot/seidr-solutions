def decipher_message(cipher1, cipher2, message):
    mapping = {c.lower(): d.lower() for c, d in zip(cipher1, cipher2)}
    result = "".join(mapping.get(char.lower(), char) for char in message)
    return result