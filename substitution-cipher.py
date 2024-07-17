def substitution_cipher(key, message):
    key_map = {key[i]: message[i] for i in range(min(len(key), len(message)))}

    return "".join([key_map.get(char, char) for char in message])