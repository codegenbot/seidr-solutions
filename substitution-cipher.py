```
def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    mapping = str.maketrans(cipher_text1, cipher_text2)
    return text_to_decrypt.translate(mapping)