```
def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = ""
    for c1, c2 in zip(cipher_text1, cipher_text2):
        deciphered_text += char if not (char == c1) else c2
    return deciphered_text