def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = "".join(c2 for c1, c2 in zip(cipher_text1, cipher_text2) if (c := char) in text)
    return deciphered_text