```
def substitution_cipher(cipher_text1, cipher_text2, message):
    return "".join([cipher_text2[cipher_text1.index(char)] if char in cipher_text1 else char for char in message])