def decipher_message(cipher1, cipher2, message):
    case = max(max(cipher1, key=str.isupper), max(cipher2, key=str.isupper))
    
    encrypt_map = {c+('' if c.islower() else '').upper(): d+('' if d.islower() else '').upper() for c, d in zip(cipher1, cipher2)}
    decrypt_map = {v+('' if v.islower() else '').upper(): k+('' if k.islower() else '').upper() for k, v in encrypt_map.items()}
    
    result = "".join(decrypt_map.get(char+('' if char.islower() else '').upper(), char) for char in message)
    return result