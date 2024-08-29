def substitution_cipher(cipher1, cipher2, message):
    return "".join([cipher2[cipher1.index(i)] if i in cipher1 else "" for i in message])