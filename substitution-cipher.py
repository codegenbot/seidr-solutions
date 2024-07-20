def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {c.lower(): d.lower() for c, d in zip(cipher1.lower(), cipher2.lower())}
    uppercase_cipher_map = {c: d for c, d in zip(cipher1.upper(), cipher2.upper())}
    return "".join([cipher_map.get(char.lower(), char) if char.isalpha() and char.islower()
                    else (uppercase_cipher_map.get(char.upper(), char).upper() if char.isalpha() and char.isupper()
                          else char)
                    for char in message])