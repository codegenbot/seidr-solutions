def substitution_cipher(cipher_key1, cipher_key2, message):
    cipher = {k: v for k, v in zip(cipher_key1, cipher_key2)}
    deciphered_message = "".join([cipher.get(char, char) for char in message])
    return deciphered_message