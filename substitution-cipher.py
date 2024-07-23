def substitution_cipher(cipher_text1, cipher_text2, text): 
    return "".join([cipher_text2[cipher_text1.index(char)] for char in text])