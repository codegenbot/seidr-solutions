def substitution_cipher(cipher1, cipher2, message):
    unique_chars = list(set(cipher1 + cipher2 + message))
    cipher_map = {c: c if c in cipher1 else d for c, d in zip(unique_chars, cipher2) if c in cipher2}
    return "".join([cipher_map.get(c, c) for c in message])