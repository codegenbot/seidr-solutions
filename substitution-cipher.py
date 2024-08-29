def substitution_cipher(cipher_text1, cipher_text2, text):
    mapping = {cipher_text1[i]: cipher_text2[i] for i in range(len(cipher_text1))}
    return "".join([mapping.get(c, c) for c in text])