def substitution_cipher(key, message):
    key_map = {v: k for k, v in zip(key, message)}

    return "".join([key_map.get(char, char) for char in message])