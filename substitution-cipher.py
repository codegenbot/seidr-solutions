def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    cipher = str.maketrans({c: d for c, d in zip(cipher_text1, cipher_text2)})
    return text_to_decrypt.translate(cipher)