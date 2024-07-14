def substitution_cipher(cipher1, cipher2, message):
    mapping = str.maketrans({k: v for k, v in zip(cipher1, cipher2)})
    return message.translate(mapping)