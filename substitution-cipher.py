def substitution_cipher(key1, key2, message):
    mapping = str.maketrans(key1, key2)
    return message.translate(mapping)