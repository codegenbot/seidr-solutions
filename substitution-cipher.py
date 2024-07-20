def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {c: d for c, d in zip(map(str.lower, cipher1), map(str.lower, cipher2))}
    return "".join([cipher_map.get(char.lower(), char) if char.isalpha() 
                    else (char.upper() if char.isupper() else char) 
                    for char in message])