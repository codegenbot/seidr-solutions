def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    return "".join([cipher_text2[cipher_text1.index(text_to_decrypt[i])] for i in range(len(text_to_decrypt))])