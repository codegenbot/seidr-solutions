def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {c: d for c, d in zip(cipher1, cipher2)}
    all_chars = set(cipher1 + cipher2)
    return "".join([cipher_map.get(char, char) for char in message if char in all_chars])