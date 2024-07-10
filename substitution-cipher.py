def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {k: v for k, v in zip(cipher1, cipher2)}
    deciphered_message = "".join([cipher_dict.get(char, char) for char in message])
    return deciphered_message