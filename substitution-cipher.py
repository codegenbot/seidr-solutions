def substitution_cipher(text1, text2, message):
    cipher = str.maketrans(text1, text2)
    return text2.join([chr(cipher.get(x, x)) for x in message])