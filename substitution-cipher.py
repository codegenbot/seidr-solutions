def substitution_cipher(key, message1, message2):
    key_map = {k: m for k, m in zip(key, message1)}
    
    return "".join([key_map.get(char, char) for char in message2])