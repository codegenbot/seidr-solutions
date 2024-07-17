```
def substitution_cipher(key1, key2, message):
    key_map = {key1[i]: key2[i] for i in range(min(len(key1), len(key2)))}

    return "".join([key_map.get(char, char) for char in message])