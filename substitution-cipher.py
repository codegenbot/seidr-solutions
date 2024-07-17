def substitution_cipher(key, message, text):
    key_map = {c: k for c, k in zip(key, message)}
    return "".join([key_map.get(c, c) for c in text])