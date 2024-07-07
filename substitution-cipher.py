def substitution_cipher(message, cipher):
    char_map = {c1: c2 for c1, c2 in zip(cipher, cipher[1:])}
    return "".join([char_map.get(c, c) for c in message])