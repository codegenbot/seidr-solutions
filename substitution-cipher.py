def substitution_cipher(message, key):
    key_map = {char: message[i] for i, char in enumerate(key)}

    return "".join([key_map.get(char, char) for char in key])