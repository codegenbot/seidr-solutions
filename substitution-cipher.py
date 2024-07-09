def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {char: cipher2[i].lower() for i, char in enumerate(cipher1)}
    result = "".join([cipher_dict.get(char.lower(), char).upper() if char.isalpha() and char not in cipher_dict else char for char in message])
    return result