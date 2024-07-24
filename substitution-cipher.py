def substitution_cipher(text1, text2, message):
    cipher = str.maketrans(text1, text2)
    return message.translate(cipher)