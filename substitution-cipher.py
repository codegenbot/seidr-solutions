def decipher_message(cipher1, cipher2, message):
    encrypt_map = {c: d for c, d in zip(cipher1, cipher2)}
    decrypt_map = {v: k for k, v in encrypt_map.items()}
    
    result = "".join(decrypt_map.get(char.upper() if char.isupper() else char.lower(), char) for char in message)
    return result