def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = ""
    for char in text:
        if char in cipher_text1:
            deciphered_text += cipher_text2[cipher_text1.index(char)]
        else:
            deciphered_text += char
    return deciphered_text