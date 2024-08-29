```
def substitution_cipher(cipher_text1, cipher_text2, text):
    if len(cipher_text1) != len(cipher_text2):
        return 
    cipher = str.maketrans(cipher_text1, cipher_text2)
    return text.translate(cipher)