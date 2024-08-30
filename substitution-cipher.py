def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher = str.maketrans({c: cipher_text2[i] for i, c in enumerate(cipher_text1)})
    return message.translate(cipher)