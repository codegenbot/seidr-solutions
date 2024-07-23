def decipher_message(cipher1, cipher2, message):
    mapping = dict(zip(sorted([c1.lower() for c1 in cipher1]), [c2.lower() for c2 in cipher2]))
    result = "".join(mapping.get(char.lower(), char) for char in message)
    return result