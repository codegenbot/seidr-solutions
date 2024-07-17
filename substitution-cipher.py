def substitution_cipher(key, message1, message2):
    key_map = {char: message1[i] for i, char in enumerate(message2)}

    return "".join([key_map.get(char, char) for char in message1])