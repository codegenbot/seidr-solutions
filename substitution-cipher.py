def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {c: d for c, d in zip(set(cipher1), set(cipher2)) if c in cipher2}
    return "".join([cipher_map.get(c.lower(), c) for c in message])