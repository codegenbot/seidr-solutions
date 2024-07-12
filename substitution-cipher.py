def substitution_cipher(cipher1, cipher2, message):
    cipher = str.maketrans("".join(cipher1), "".join(cipher2))
    return message.translate(cipher)