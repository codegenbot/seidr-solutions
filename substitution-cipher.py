def substitution_cipher(cipher_text1, cipher_text2, message):
    deciphered_message = ""
    for char in message:
        index = ord(char) - 97
        if index >= len(cipher_text1):
            deciphered_message += char
        else:
            deciphered_message += cipher_text2[index]
    return deciphered_message