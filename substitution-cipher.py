```
def substitution_cipher(cipher_text1, cipher_text2, text):
    cipher_map = {c1: c2 for c1, c2 in zip(cipher_text1, cipher_text2)}
    deciphered_text = "".join([cipher_map.get(c, c) for c in text])
    return deciphered_text