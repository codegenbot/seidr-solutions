def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = dict(zip(cipher1.lower(), cipher2.lower()))
    result = "".join([cipher_dict.get(char.lower()) or char for char in message])
    return result