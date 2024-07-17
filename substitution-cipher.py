def substitution_cipher(key, message1, message2):
    key_map = {k: v for k, v in zip(message1, message2)}
    return "".join([key_map.get(char, char) for char in key])