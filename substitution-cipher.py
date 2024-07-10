def decipher_cipher(cipher1, cipher2, message):
    cipher_dict = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    return "".join([cipher_dict.get(char, char) for char in message])