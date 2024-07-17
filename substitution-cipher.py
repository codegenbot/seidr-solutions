def substitution_cipher(key, message):
    k_map = {k: v for k, v in zip(key, message)}
    m_map = {v: k for k, v in zip(message, key)}
    
    return "".join([m_map.get(char, char) for char in message])