```
def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {k.lower(): v for k, v in zip(cipher1, cipher2)}
    for i in range(len(cipher1)):
        if not cipher1[i].isalpha():
            if cipher1[i] != ' ':
                cipher_dict[cipher1[i].lower()] = cipher2[i]
        elif not cipher2[i].isalpha():
            cipher_dict[cipher1[i].lower()] = cipher2[i].upper()
    return "".join([cipher_dict.get(char.lower()).upper() if char.isalpha() else (cipher_dict.get(char.lower()) if char.islower() and char in cipher_dict else char) for char in message])