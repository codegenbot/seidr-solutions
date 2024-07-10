def substitution_cipher(text1, text2, text3):
    cipher = str.maketrans(text1, text2)
    return text3.translate(cipher)