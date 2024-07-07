```Python
def substitution_cipher(cipher_text1, cipher_text2, text):
    cipher_dict = {c1: c2 for c1, c2 in zip(cipher_text1, cipher_text2)}
    deciphered_text = "".join([cipher_dict.get(char, char) for char in text])
    return deciphered_text