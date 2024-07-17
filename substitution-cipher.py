def substitution_cipher(key, message, text):
    key_map = {key[i]: c for i, c in enumerate(message)}
    return "".join([key_map.get(c, c) for c in text])