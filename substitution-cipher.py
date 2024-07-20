def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {c: d for c, d in zip(cipher1.lower(), cipher2.lower())}
    return "".join([cipher_map.get(char.lower(), char) if char.isalpha() 
                    else (char.upper() if char.isupper() else char) 
                    for char in message])