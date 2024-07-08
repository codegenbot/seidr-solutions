def substitution_cipher(cipher1, cipher2, text):
    cipher_dict = {k: v for k, v in zip(cipher1, cipher2)}
    return ''.join([cipher_dict.get(c, c) for c in text])