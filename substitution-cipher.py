def substitution_cipher(key, message):
    key_map = {c: k for k, c in zip(key, message)}

    return "".join([key_map.get(c, c) for c in key])