def substitution_cipher(cipher_text1, cipher_text2, text):
    cipher = str.maketrans(cipher_text1, cipher_text2)
    return text.translate(cipher)