```
def substitution_cipher(cipher1, cipher2, message):
    cipher_map = str.maketrans(''.join([chr(a) for a in zip(map(ord, cipher1.lower()), map(ord, cipher2.lower()))]).replace(chr(32), ' '), chr(32)*len(message))
    return message.translate(cipher_map).upper()