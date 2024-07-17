```
def substitution_cipher(cipher_text1, cipher_text2, text_to_decipher):
    deciphered_message = ""
    for char in text_to_decipher:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            deciphered_message += cipher_text2[index]
        else:
            deciphered_message += char
    return deciphered_message