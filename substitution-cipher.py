def substitution_cipher(key, message):
    key_map = {char: k for k, char in zip(key, message)}
    
    return "".join([key_map.get(char, char) for char in message])