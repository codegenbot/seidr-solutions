def substitution_cipher(key, message):
    key_map = {char: key[i] for i, char in enumerate(key)}

    return "".join([key_map.get(char, char) for char in message])