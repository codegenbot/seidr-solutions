def decipher_message(cipher1, cipher2, message):
    case = len([char for char in cipher1 if char.isupper]) > 0
    encrypt_map = {c+('' if c.islower() else '').upper(): d+('' if d.islower() else '').upper() for c, d in zip(cipher1, cipher2)}
    decrypt_map = {v+('' if v.islower() else '').upper(): k+('' if k.islower() else '').upper() for k, v in zip(cipher2, cipher1)}  
    result = "".join(decrypt_map.get(char.upper() if case else char.lower(), char) for char in message)
    return result