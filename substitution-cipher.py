def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = "".join([cipher2[i] if c in cipher1 else c for i, c in enumerate(message)])
    return deciphered_message