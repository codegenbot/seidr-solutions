def decipher_message(cipher1, cipher2, message):
    case = max(cipher1 + cipher2, key=str.isupper)
    
    encrypt_map = {c+case: d+case for c, d in zip(cipher1, cipher2)}
    decrypt_map = {v+case: k+case for k, v in encrypt_map.items()}
    
    result = "".join(decrypt_map.get(char+case, char) for char in message)
    return result