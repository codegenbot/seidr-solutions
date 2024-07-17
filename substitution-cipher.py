def substitution_cipher(cipher, message):
    cipher_dict = {k: v for k, v in zip(cipher, cipher)}
    return "".join([cipher_dict.get(char, char) for char in message])