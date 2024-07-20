def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char1: char2 for char1, char2 in zip(cipher1.lower(), cipher2.lower())}
    cipher_map.update({c.upper(): v.upper() for c, v in zip([c for c in cipher1], [c for c in cipher2])}

    return ''.join([cipher_map.get(char.lower(), char) if not char.isalnum() 
                    else (cipher_map.get(char.lower(), char).upper() if char.isupper() 
                          else cipher_map.get(char.lower(), char).lower()) for char in message])