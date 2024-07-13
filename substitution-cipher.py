def decipher_cipher(cipher_text1, cipher_text2, message):
    cipher_dict = {k: v for k, v in zip(cipher_text1, cipher_text2)}
    deciphered_message = "".join([cipher_dict.get(char, char) for char in message])
    return deciphered_message