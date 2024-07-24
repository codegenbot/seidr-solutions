def substitution_cipher(cipher_key1, cipher_key2, message):
    deciphered_message = ""
    for key1_char, key2_char in zip(cipher_key1, cipher_key2):
        if key1_char in message:
            index = (message.index(key1_char))
            deciphered_message += key2_char
        else:
            deciphered_message += key1_char
    return deciphered_message