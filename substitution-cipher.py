def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = dict(zip(map(str.lower, cipher1), map(str.lower, cipher2)))
    result = "".join([cipher_dict.get(char.lower(), char) for char in message])
    return result.upper()