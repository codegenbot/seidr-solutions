def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered = ""
    for char in text:
        if char in cipher_text1:
            idx = cipher_text1.index(char)
            deciphered += cipher_text2[idx]
        else:
            deciphered += char
    return deciphered