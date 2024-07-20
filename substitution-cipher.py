def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {c: d for c, d in zip(cipher1, cipher2)}
    cipher_map.update({c: c for c in set(cipher1) - set(cipher2)})
    return "".join([cipher_map.get(c, c) for c in message])