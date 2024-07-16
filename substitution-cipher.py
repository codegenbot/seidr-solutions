```
def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered = ""
    for i in range(len(text)):
        if i < len(cipher_text1) and i < len(cipher_text2):
            deciphered += cipher_text2[cipher_text1.index(text[i])]
        else:
            deciphered += text[i]
    return deciphered