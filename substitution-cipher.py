def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered = "".join(
        [
            cipher_text2[cipher_text1.index(char)] if char in cipher_text1 else char
            for char in text
        ]
    )
    return deciphered