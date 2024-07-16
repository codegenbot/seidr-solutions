def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered = ""
    for i in range(len(text)):
        if text[i] in cipher_text1:
            index = cipher_text1.index(text[i])
            deciphered += cipher_text2[index]
        else:
            deciphered += text[i]
    return deciphered