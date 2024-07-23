def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {k.lower(): v if i.isalpha() else ' ' for k, i, v in zip(cipher1, cipher1, cipher2)}
    return "".join([cipher_dict.get(char.lower()).upper() if char.isalpha() and not char.islower() 
                    else (cipher_dict.get(char.lower()) if char.isalpha() and char.islower() else char) for char in message])