def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {k.lower(): v for k, v in zip(cipher1, cipher2)}
    cipher_dict.update({k.upper(): v.upper() for k, v in zip([i.lower() if i.isalpha() else '' for i in cipher1], [i.upper() if i.isalpha() else '' for i in cipher2])}
    return "".join([cipher_dict.get(char.lower()).upper() if char.isalpha() else " " 
                    if not char.isalpha() else 
                    (cipher_dict.get(char.lower()) if char.islower() else cipher_dict.get(char.upper())) for char in message])