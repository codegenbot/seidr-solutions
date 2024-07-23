def substitution_cipher(cipher_text1, cipher_text2, text):
    mapping = {c1: c2 for c1, c2 in zip(cipher_text1, cipher_text2)}
    deciphered = "".join(mapping.get(char, char) for char in text)
    return deciphered