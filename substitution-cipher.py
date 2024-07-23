def decipher_message(cipher1, cipher2, message):
    encrypt_map = {c.lower(): d for c, d in zip(cipher1.lower(), cipher2.lower())}
    decrypt_map = {v: k for k, v in encrypt_map.items()}
    
    result = "".join(decrypt_map.get(char.lower(), char) for char in message)
    return result