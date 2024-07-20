def substitution_cipher(cipher1, cipher2, message):
    cipher_map = str.maketrans(''.join(map(str, zip(cipher1.lower(), cipher2.lower()))).replace(' ', ''), ' '*len(message))
    return message.translate(cipher_map)