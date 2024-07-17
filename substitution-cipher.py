def substitution_cipher(key, message):
    key_map = {k: v for k, v in zip(key, message[1:])]
    
    return "".join([key_map.get(char, char) for char in message[0]])