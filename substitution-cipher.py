```
def substitution_cipher(cipher_text1, cipher_text2, text):
    cipher_dict = {cipher_text1[i]: cipher_text2[i] for i in range(min(len(cipher_text1), len(cipher_text2)))}
    deciphered_text = "".join([cipher_dict.get(char.lower(), char) for char in text])
    return deciphered_text