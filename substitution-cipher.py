def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {c.lower(): d.lower() for c, d in zip(cipher1, cipher2)}
    return "".join([cipher_map.get(char.lower(), char) if char.isalpha()
                    else (char.upper() if char.isupper() else char)
                    for char in message])