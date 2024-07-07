```
def substitution_cipher(cipher_text1, cipher_text2, text):
    cipher = dict(zip(cipher_text1, cipher_text2))
    deciphered_text = "".join([cipher.get(char, char) for char in text])
    return deciphered_text