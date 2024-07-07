def substitution_cipher(cipher_text1, cipher_text2, message):
    deciphered_message = ""
    for i in range(len(message)):
        if i < len(cipher_text1):
            deciphered_message += cipher_text2[cipher_text1.index(message[i])]
        else:
            deciphered_message += message[i]
    return deciphered_message