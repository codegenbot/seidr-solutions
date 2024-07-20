def substitution_cipher(cipher1, cipher2, message):
    cipher_map_lower = {char1: char2 for char1, char2 in zip(cipher1.lower(), cipher2.lower())}
    cipher_map_upper = {char1: char2 for char1, char2 in zip([c.upper() for c in cipher1], [c.upper() for c in cipher2])}

    return ''.join([cipher_map_lower.get(char.lower(), char) if char.isalpha() 
                    else cipher_map_upper.get(char.upper(), char) if char.isalpha() 
                    else char for char in message])