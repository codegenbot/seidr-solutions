def substitution_cipher(cipher1, cipher2, message):
    mapping = str.maketrans(cipher1, cipher2)
    return message.translate(mapping)