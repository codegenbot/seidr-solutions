def decipher_message(cipher1, cipher2, message):
    encrypt_map = {c.lower(): d for c, d in zip(cipher1.lower(), cipher2.lower())}
    decrypt_map = {v: k if len([k2 for k2, v2 in encrypt_map.items() if v2 == v]) == 1 else '' for k, v in encrypt_map.items()}
    
    result = "".join(decrypt_map.get(char.lower()) or char for char in message)
    return result