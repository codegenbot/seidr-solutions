def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered = ""
    for char1, char2 in zip(cipher_text1, cipher_text2):
        if char1 in text:
            deciphered += char2
        else:
            deciphered += char1
    return deciphered